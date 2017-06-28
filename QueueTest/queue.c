/*
 * File:   queue.c
 * Author: Christiaan Aspeling
 *
 * Created on 28 June 2017, 8:22 AM
 */

#include "queue.h"

// Initialize the queue start values. Must always be called before using a queue.

void queue_init(Queue *q)
{
    q->front = 0;
    q->rear = -1;
    q->item_count = 0;
}

// Returns the value at the front of the queue (the first value that will
// be popped)

int queue_peek(Queue *q)
{
    return q->buffer[q->front];
}

// True - the queue is empty, False - there is something in the queue.

bool queue_is_empty(Queue *q)
{
    return q->item_count == 0;
}

// True - the queue is full, False - there is room in the queue.

bool queue_is_full(Queue *q)
{
    return q->item_count == QUEUE_SIZE;
}

// Returns the number of items already pushed into the queue.

int queue_item_count(Queue *q)
{
    return q->item_count;
}

// Push (insert) an item into the back of the queue.

void queue_push(Queue *q, int data)
{
    if (!queue_is_full(q))
    {
        if (q->rear == QUEUE_SIZE - 1)
        {
            q->rear = -1;
        }

        q->buffer[++q->rear] = data;
        q->item_count++;
    }
}

// Removes and returns the item at the front of the queue. Returns 0 if queue
// is empty.

int queue_pop(Queue *q)
{
    if (queue_is_empty(q))
    {
        return 0;
    }

    int data = q->buffer[q->front++];

    if (q->front == QUEUE_SIZE)
    {
        q->front = 0;
    }

    q->item_count--;
    return data;
}
