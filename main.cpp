#include "bubble_sort.h"
#include "selection_sort.h"
#include "insert_sort.h"
#include "shell_sort.h"
#include "merge_sort.h"

#define MAX_LENGTH (8)

int main() {
    int array[MAX_LENGTH] = {5, 8, 6, 3, 9, 2, 1, 7};
    bubble_sort bubble(array, MAX_LENGTH);
    bubble.sort();
    bubble.print();

    selection_sort selection(array, MAX_LENGTH);
    selection.sort();
    selection.print();

    insert_sort insert(array, MAX_LENGTH);
    insert.sort();
    insert.print();

    shell_sort shell(array, MAX_LENGTH);
    shell.sort();
    shell.print();

    merge_sort merge(array, MAX_LENGTH);
    merge.sort();
    merge.print();

    return 0;
}
