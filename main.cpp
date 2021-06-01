#include "bubble_sort.h"
#include "selection_sort.h"
#include "insert_sort.h"

#define MAX_LENGTH (7)

int main() {
    int array[MAX_LENGTH] = {3, 2, 1, 5, 6, 4, 3};
    bubble_sort b(array, MAX_LENGTH);
    b.sort();
    b.print();

    selection_sort s(array, MAX_LENGTH);
    s.sort();
    s.print();

    insert_sort i(array, MAX_LENGTH);
    i.sort();
    i.print();

    return 0;
}
