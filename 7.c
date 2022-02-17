#include "support.h"

int main(void) {

    item_t *list_a;
    item_t *list_b;

    item_t *merge_list = NULL;

    get_sorted_lists(&list_a, &list_b);

    print_list("A", list_a);
    print_list("B", list_b);

    //****************************

    // Code Here

    //****************************

    print_list("MERGE", merge_list);

    return 0;
}