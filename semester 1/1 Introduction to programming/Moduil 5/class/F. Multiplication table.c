#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n;
       scanf("%d", &n);
       for(int i = 1; i <= 12; i++)
       {
        int sum = n * i;
        printf("%d * %d = %d\n",n, i, sum);
       }
    return 0;
}
