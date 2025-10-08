#include <stddef.h> // For NULL

/**
 * Fills a character array with a repeated character and null-terminates it.
 * Creates a proper C string by filling (dest_cap - 1) positions with the
 * character 'c' and placing a null terminator at the end.
 * 
 * @param dest     Destination character array to fill
 * @param dest_cap Capacity of the destination array
 * @param c        Character to fill the array with
 */
void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0) {
        return;
    }

    if (dest_cap == 1) {
        dest[0] = '\0';
        return;
    }
    
    for (int i = 0; i < dest_cap - 1; i++) {
        dest[i] = c;
    }
    
    dest[dest_cap - 1] = '\0';
}
