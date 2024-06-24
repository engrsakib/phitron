#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int a[3][3];
       for(int i = 0; i < 3; i++)
       {
           for(int j = 0; j < 3; j++)
           {
               scanf("%d", &a[i][j]);
           }
           //printf("\n");
       }
       for(int i = 0; i < 3; i++)
       {
           for(int j = 0; j < 3; j++)
           {
               printf("%d \t", a[i][j]);
           }
           printf("\n");
       }
    return 0;
}
