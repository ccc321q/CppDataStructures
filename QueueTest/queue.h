/*
 * File:   queue.h
 * Author: Christiaan Aspeling
 *
 * Created on 28 June 2017, 8:22 AM
 */

#pragma once
#include <stdbool.h>

#define QUEUE_SIZE 100

typedef struct
{
    int buffer[QUEUE_SIZE];
    int front;
    int rear;
    int item_count;
} Queue;

// Initialize the queue start values. Must always be called before using a queue.
void queue_init(Queue *q);

// Returns the value at the front of the queue (the first value that will
// be popped)
int queue_peek(Queue *q);

// True - the queue is empty, False - there is something in the queue.
bool queue_is_empty(Queue *q);

// True - the queue is full, False - there is room in the queue.
bool queue_is_full(Queue *q);

// Returns the number of items already pushed into the queue.
int queue_item_count(Queue *q);

// Push (insert) an item into the queue.
void queue_push(Queue *q, int data);

// Removes and returns the item at the front of the queue. Returns 0 if queue
// is empty.
int queue_pop(Queue *q);