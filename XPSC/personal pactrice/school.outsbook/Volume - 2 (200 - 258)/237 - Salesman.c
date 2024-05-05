#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//#include <conio.h>
#include <limits.h>
#include <ctype.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n;
       scanf("%d", &n);
       int m = n / 3;
       int e = m * 2;
       if(m + e == n)
       {
        printf("Morning: %d Kilograms.\nAfternoon: %d Kilograms.",m , e);
       }
    return 0;
}
