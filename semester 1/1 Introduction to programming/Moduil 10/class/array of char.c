#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int a[5];
       for(int i = 0; i < 5; i++)
       {
        scanf("%c", &a[i]);
       }
       for(int i = 0; i < 5; i++)
       {
        printf("%c", a[i]);
       }
       printf("\n%d", sizeof(a));
    return 0;
}
