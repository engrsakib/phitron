#include <stdio.h>

int my_len(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char *myString = "Hello"; // Change this string as needed

    int length = my_len(myString);
    printf("%d\n", length);

    return 0;
}
