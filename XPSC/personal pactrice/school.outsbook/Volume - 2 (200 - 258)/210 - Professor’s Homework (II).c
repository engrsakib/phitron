#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if (N >= 3) {
        int first = N / 3 - 1;
        int second = N / 3;
        int third = N / 3 + 1;

        if ((first + second + third) == N) {
            printf("%d %d %d\n", first, second, third);
        } else {
            printf("No consecutive numbers found.\n");
        }
    } else {
        printf("No consecutive numbers found.\n");
    }
    
    return 0;
}
