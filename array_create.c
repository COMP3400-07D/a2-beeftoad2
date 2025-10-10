#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc

/**
 * Creates a dynamic array containing all even numbers from begin to end (inclusive).
 * The array is allocated using malloc and should be freed by the caller.
 * 
 * @param begin Starting value of the range (inclusive)
 * @param end   Ending value of the range (inclusive)
 * @return      Pointer to the dynamically allocated array containing even numbers,
 *              or NULL if no even numbers exist in the range or begin > end
 */
int* array_create_evens(int begin, int end) {
    // Handle invalid range
    if (begin > end) {
        return NULL;
    }
    
    // Count how many even numbers are in the range
    int count = 0;
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    
    // If no even numbers found, return NULL
    if (count == 0) {
        return NULL;
    }
    
    // Allocate memory for the array
    int* array = (int*)malloc(count * sizeof(int));
    if (array == NULL) {
        return NULL; // malloc failed
    }
    
    // Fill the array with even numbers
    int index = 0;
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            array[index] = i;
            index++;
        }
    }
    
    return array;
}
