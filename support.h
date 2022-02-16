#ifndef __SUPPORT_H__
#define __SUPPORT_H__

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIST_A \
    { 1, 2, 2, 4, 6, 8, 9 }
#define LIST_B \
    { 0, 1, 2, 4, 7, 10, 12, 13, 15, 16, 17 }

typedef struct ITEM {
    uint32_t value;
    struct ITEM *next;

} item_t;

void get_sorted_lists(item_t **list_a, item_t **list_b);
void print_list(char *title, item_t *list);

#endif