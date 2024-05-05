#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if (N >= 3) {
        int first = N / 4 - 3;
        int second = N / 4 - 1;
        int third = N / 4 + 1;
        int forth = N / 4 + 3;
        if ((first + second + third + forth) == N) {
            printf("%d %d %d %d\n", first, second, third, forth);
        } else {
            printf("No consecutive numbers found.\n");
        }
    } else {
        printf("No consecutive numbers found.\n");
    }
    
    return 0;
}
