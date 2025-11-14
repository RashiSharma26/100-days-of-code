/* Write a program to change a date format from dd/mm/yyyy to dd-MMM-yyyy. */
#include <stdio.h>
#include <string.h> // For sscanf

int main() {
    char input_date[12]; // e.g., "25/04/2024" + null
    int day, month, year;
    int scan_count = 0;

    // Array of month abbreviations
    const char *months[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter a date in dd/mm/yyyy format: ");
    scanf("%s", input_date);

    // --- 1. Parse the input string ---
    // sscanf reads from a string, similar to how scanf reads from the keyboard
    // It returns the number of items successfully matched.
    scan_count = sscanf(input_date, "%d/%d/%d", &day, &month, &year);

    // --- 2. Validate the input ---
    if (scan_count != 3) {
        printf("Error: Invalid date format. Please use dd/mm/yyyy.\n");
        return 1; // Exit with an error
    }

    if (month < 1 || month > 12) {
        printf("Error: Invalid month. Must be between 1 and 12.\n");
        return 1;
    }

    if (day < 1 || day > 31) {
        // This is a basic check; a real program would check days per month
        printf("Error: Invalid day. Must be between 1 and 31.\n");
        return 1;
    }

    // --- 3. Print the new format ---
    // We use (month - 1) as the index because arrays are 0-based
    // (Month 1 = "Jan" at index 0)
    printf("Converted date: %02d-%s-%d\n", day, months[month - 1], year);
    
    // Example for the user's request:
    if (month == 4) {
         printf("e.g., %02d/04/%d  ->  %02d-Apr-%d\n", day, year, day, year);
    }

    return 0;
}