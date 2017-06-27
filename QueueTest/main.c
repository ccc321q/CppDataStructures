#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "queue.h"

int main()
{
    Queue qu;
    queue_init(&qu);

    queue_push(&qu, 3);
    queue_push(&qu, 5);
    queue_push(&qu, 9);
    queue_push(&qu, 1);
    queue_push(&qu, 12);
    printf("Size: %d\n", queue_item_count(&qu));
    queue_push(&qu, 16);
    printf("Size: %d\n", queue_item_count(&qu));
    queue_push(&qu, 18);
    printf("Size: %d\n", queue_item_count(&qu));
    queue_push(&qu, 11);

    printf("Pop: %d\n", queue_pop(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));

    printf("\n\n");

    queue_push(&qu, 54);
    printf("Size: %d\n", queue_item_count(&qu));
    queue_push(&qu, 24);
    printf("Size: %d\n", queue_item_count(&qu));
    queue_push(&qu, 63);
    printf("Size: %d\n", queue_item_count(&qu));

    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
    printf("Pop: %d\n", queue_pop(&qu));
    printf("Size: %d\n", queue_item_count(&qu));
}