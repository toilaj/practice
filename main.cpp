#include "bubble_sort.h"
#include "selection_sort.h"
int main() {
    int array[6] = {3, 2, 1, 5, 6, 4};
    bubble_sort b(array, 6, "bubble sort");
    b.sort();
    b.print();

    selection_sort s(array, 6, "selection sort");
    s.sort();
    s.print();

    return 0;
}
