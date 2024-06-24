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
       scanf("%d",&n);
       int ar[n];
       printf("input\n");
       
       for(int i = 0; i < n; i++)
       {
        scanf("%d", &ar[i]);
       }
       
       printf("output:\n");
       
       for(int i = n -1; i >= 0; i--)
       {
        printf("%d\n", ar[i]);
       }
    return 0;
}
