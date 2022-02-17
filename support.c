#include "support.h"

#define LIST_A \
    { 1, 2, 2, 4, 6, 8, 9 }
#define LIST_B \
    { 0, 1, 2, 4, 7, 10, 12, 13, 15, 16, 17 }

static item_t *init_lists(uint32_t list[], uint32_t list_size);

static item_t *init_lists(uint32_t list[], uint32_t list_size) {

    item_t *start_item = NULL;
    item_t *item = NULL;

    for (uint32_t i = 0; i < list_size; ++i) {

        if (start_item != NULL) {
            item->next = (item_t *)malloc(sizeof(item_t));
            item = item->next;
        } else {
            start_item = (item_t *)malloc(sizeof(item_t));
            item = start_item;
        }
        item->value = list[i];
        item->next = NULL;
    }

    return start_item;
}

void get_sorted_lists(item_t **list_a, item_t **list_b) {

    uint32_t buffer_a[] = LIST_A;
    uint32_t buffer_b[] = LIST_B;
    *list_a = init_lists(buffer_a, (sizeof(buffer_a) / sizeof(uint32_t)));
    *list_b = init_lists(buffer_b, (sizeof(buffer_b) / sizeof(uint32_t)));
}

void print_list(char *title, item_t *list) {

    printf("%s -> {", title);
    while (list) {
        printf("%u", list->value);
        list = list->next;
        if (list) {
            printf(",");
        }
    }
    printf("}\n");
}