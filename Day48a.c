/* Write a program to check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h> // For strlen, strcat, strstr, strcpy

int main() {
    char str1[100], str2[100];
    char temp[200]; // Must be 2x the size of str1
    
    int len1, len2;
    int isRotation = 0; // Flag: 0=No, 1=Yes
    char *ptr; // Pointer to store the result of strstr

    // --- 1. Read the first string ---
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // --- 2. Read the second string ---
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // --- 3. Get lengths and remove newlines from fgets() ---
    len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0'; // Replace newline with null
        len1--;               // Decrement the length
    }

    len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    // --- 4. Check if rotation is possible ---
    // For a rotation to be possible, lengths must be equal.
    if (len1 == len2) {
        
        // --- 5. Create the concatenated string ---
        // e.g., if str1 = "abcde", temp becomes "abcdeabcde"
        
        // Copy the first string into temp
        strcpy(temp, str1);
        
        // Concatenate the first string onto the end of temp
        strcat(temp, str1);

        // --- 6. Check if str2 is a substring of temp ---
        // strstr() returns a pointer if the substring is found,
        // and NULL if it is not.
        ptr = strstr(temp, str2);

        if (ptr != NULL) {
            // Substring was found
            isRotation = 1;
        }
    }
    // If len1 != len2, isRotation remains 0 (False)

    // --- 7. Print the final result ---
    if (isRotation == 1) {
        printf("\nResult: \"%s\" is a rotation of \"%s\". (Rotation)\n", str2, str1);
    } else {
        printf("\nResult: \"%s\" is NOT a rotation of \"%s\". (Not rotation)\n", str2, str1);
    }

    return 0;
}