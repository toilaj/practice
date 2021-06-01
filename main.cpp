#include "bubble_sort.h"
#include "selection_sort.h"
#include "insert_sort.h"
#include "shell_sort.h"

#define MAX_LENGTH (7)

int main() {
    int array[MAX_LENGTH] = {3, 2, 1, 5, 6, 4, 3};
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

    return 0;
}
