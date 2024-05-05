#include <stdio.h>
#include <time.h>

int main() {
    char inputDate[] = "December, 5 Thu, 2015";
    struct tm tm;

    // Parse the input date string
    if (strptime(inputDate, "%d, %d %a, %Y", &tm) != NULL) {
        // Format and print the date in a different format
        char outputDate[100];
        strftime(outputDate, sizeof(outputDate), "%A, %B %d, %Y", &tm);
        printf("Output: %s\n", outputDate);
    } else {
        printf("Invalid date format\n");
    }

    return 0;
}
