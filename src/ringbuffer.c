// © 2024 Oskar Arnudd

#include "../inc/ringbuffer.h"

void ring_buffer_create(ring_buffer_t* ring_buffer, uint8_t *buffer, uint32_t size)
{
    ring_buffer->buffer = buffer;
    ring_buffer->read_index = 0;
    ring_buffer->write_index = 0;
    ring_buffer->mask = size - 1;
}

bool ring_buffer_empty(ring_buffer_t* ring_buffer)
{
    return ring_buffer->read_index == ring_buffer->write_index;
}

bool ring_buffer_read(ring_buffer_t* ring_buffer, uint8_t* byte)
{
    uint32_t local_read_index = ring_buffer->read_index;
    uint32_t local_write_index = ring_buffer->write_index;

    if(local_read_index == local_write_index) return false;

    *byte = ring_buffer->buffer[local_read_index];
    local_read_index = (local_read_index + 1) & ring_buffer->mask;
    ring_buffer->read_index = local_read_index;

    return true;
}

bool ring_buffer_write(ring_buffer_t* ring_buffer, uint8_t byte)
{
    uint32_t local_read_index = ring_buffer->read_index;
    uint32_t local_write_index = ring_buffer->write_index;
    uint32_t next_write_index = (local_write_index + 1) & ring_buffer->mask;

    if(local_read_index == next_write_index){
	return false;
    }

    ring_buffer->buffer[local_write_index] = byte;
    ring_buffer->write_index = next_write_index;
    return true;
}

bool ring_buffer_delete(ring_buffer_t *ring_buffer)
{
    uint32_t local_read_index = ring_buffer->read_index;
    uint32_t local_write_index = ring_buffer->write_index;

    if(local_write_index > ((local_read_index) & ring_buffer->mask)){
	ring_buffer->write_index--;
	return true;
    }
    return false;
}

void ring_buffer_flush(ring_buffer_t* ring_buffer)
{
    ring_buffer->read_index = ring_buffer->write_index;
}
