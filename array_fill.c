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
    // Handle edge cases
    if (array == NULL || array_len <= 0) {
        return 0;
    }
    
    // If begin > end, no elements to fill
    if (begin > end) {
        return 0;
    }
    
    // Calculate the range size (how many numbers from begin to end inclusive)
    int range_size = end - begin + 1;
    
    // Fill only as many elements as we can fit in the array
    int elements_to_fill = (range_size < array_len) ? range_size : array_len;
    
    // Fill the array with consecutive integers starting from begin
    for (int i = 0; i < elements_to_fill; i++) {
        array[i] = begin + i;
    }
    
    return elements_to_fill;
}
