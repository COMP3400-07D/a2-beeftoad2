#include <stddef.h> // For NULL

/**
 * Concatenates two strings by appending src2 to the end of src1.
 * The result is stored in src1, which must have sufficient capacity.
 * The function finds the end of the existing string in src1 and appends
 * characters from src2 until either src2 is exhausted or src1 reaches
 * its capacity limit (reserving space for null terminator).
 * 
 * @param src1     Destination string (modified in-place)
 * @param src1_cap Total capacity of the src1 buffer
 * @param src2     Source string to append (not modified)
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src1_cap <= 0 || src2 == NULL) {
        return;
    }
    int src1_len = 0;
    while (src1_len < src1_cap && src1[src1_len] != '\0') {
        src1_len++;
    }
    if (src1_len >= src1_cap) {
        return;
    }
    int src2_index = 0;
    while (src1_len < src1_cap - 1 && src2[src2_index] != '\0') {
        src1[src1_len] = src2[src2_index];
        src1_len++;
        src2_index++;
    }
    src1[src1_len] = '\0';
}

