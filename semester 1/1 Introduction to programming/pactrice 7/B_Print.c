#include <stdio.h>

void printNumbers(int x) {
    for (int i = 1; i <= x; i++) {
        printf("%d", i);
        if (i != x) {
            printf(" ");
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printNumbers(n);
    return 0;
}
