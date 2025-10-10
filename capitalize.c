#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>  

/**
 * Creates a new string with all lowercase letters converted to uppercase.
 * All other characters (uppercase letters, digits, symbols, etc.) are left unchanged.
 * The result is a dynamically allocated null-terminated string that should be freed by the caller.
 * 
 * @param s Input string to capitalize
 * @return  Pointer to newly allocated capitalized string, or NULL if input is NULL or malloc fails
 */
char* capitalize(const char* s) {
    if (s == NULL) {
        return NULL;
    }
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    char* result = (char*)malloc((length + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    for (int i = 0; i < length; i++) {
        result[i] = toupper(s[i]);
    }
    result[length] = '\0';
    
    return result;
}

