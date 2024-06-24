#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n, sum = 0;
     scanf("%d", &n);
     char a[n];
     scanf("%s",a);
     for(int i = 0; i < n; i++)
     {
        a[i] = a[i] - '0';
        sum += a[i];
     }  
     printf("%d", sum);
    return 0;
}
