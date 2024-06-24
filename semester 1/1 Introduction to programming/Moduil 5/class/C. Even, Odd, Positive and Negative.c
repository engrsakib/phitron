#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int N;
    scanf("%d", &N);

    int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        }
    }
    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);
    return 0;
}
