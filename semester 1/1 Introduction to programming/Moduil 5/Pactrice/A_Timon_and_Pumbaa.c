#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int a, b, sum;
       scanf("%d %d", &a, &b);
       sum = a -b; 
       if(sum <= 0)
       {
        sum = 0;
        printf("%d", sum);
       }
       else{
        printf("%d", sum);
       }
    return 0;
}
