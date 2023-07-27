#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
    int *start = a;
    int *end = a + n - 1;
    int temp;

    while (start < end)
    {
        /* Swap the values pointed to by start and end */
        temp = *start;
        *start = *end;
        *end = temp;

        /* Move start and end pointers */
        start++;
        end--;
    }
}
