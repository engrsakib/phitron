#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int test, n, sum;
    scanf("%d", &test);
    for(int t = 1; t <= test; t++)
    {
        scanf("%d", &n);
        do{
            sum = n % 10;
            printf("%d ",sum);
             n = n / 10;
        }while(n != 0);
        printf("\n");
    }   
    return 0;
}
