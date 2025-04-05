// © 2024 Oskar Arnudd

#ifndef RINGBUFFER_H
#define RINGBUFFER_H

#include <stdint.h>
#include <stdbool.h>

typedef struct ring_buffer_t {
    uint8_t* buffer;
    uint8_t read_index;
    uint8_t write_index;
    uint32_t mask;
} ring_buffer_t;

void ring_buffer_create(ring_buffer_t *ring_buffer, uint8_t *buffer, uint32_t size);
bool ring_buffer_empty(ring_buffer_t *ring_buffer);
bool ring_buffer_read(ring_buffer_t *ring_buffer, uint8_t* byte);
bool ring_buffer_write(ring_buffer_t *ring_buffer, uint8_t byte);
bool ring_buffer_delete(ring_buffer_t *ring_buffer);
void ring_buffer_flush(ring_buffer_t *ring_buffer);

#endif

