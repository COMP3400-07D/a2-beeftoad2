#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h> // For islower, isupper, isdigit

/**
 * Validates a password according to strict requirements:
 * - Must be between 6 and 10 characters long (inclusive)
 * - Must contain only lowercase letters, uppercase letters, or digits
 * - Must contain at least 2 lowercase letters
 * - Must contain at least 2 uppercase letters
 * 
 * @param s The password string to validate
 * @return true if the password meets all requirements, false otherwise
 */
bool valid_password(const char* s) {
    if (s == NULL) {
        return false;
    }
    int length = 0;
    int lowercase_count = 0;
    int uppercase_count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        length++;
        if (!islower(c) && !isupper(c) && !isdigit(c)) {
            return false;
        }
        if (islower(c)) {
            lowercase_count++;
        } else if (isupper(c)) {
            uppercase_count++;
        }
    }
    if (length < 6 || length > 10) {
        return false;
    }
    if (lowercase_count < 2 || uppercase_count < 2) {
        return false;
    }
    return true;
}
