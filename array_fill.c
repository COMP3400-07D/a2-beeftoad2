#include <stddef.h> // For NULL

/**
 * Fills the array with consecutive integers from begin to end (inclusive).
 * 
 * @param array     Pointer to the array to fill
 * @param array_len Length of the array
 * @param begin     Starting value (inclusive)
 * @param end       Ending value (inclusive)
 * @return          Number of elements actually filled in the array
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if (array == NULL || array_len <= 0) {
        return 0;
    }
    if (begin > end) {
        return 0;
    }
    int range_size = end - begin + 1;
    int elements_to_fill = (range_size < array_len) ? range_size : array_len;
    for (int i = 0; i < elements_to_fill; i++) {
        array[i] = begin + i;
    }
    
    return elements_to_fill;
}
