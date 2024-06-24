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
       int n, m;
       scanf("%d %d", &n, &m);
       int a[n][m];
       for(int i = 0; i < n; i++)
       {
           for(int j = 0; j < m; j++)
           {
               scanf("%d", &a[i][j]);
           }
           //printf("\n");
       }
       int element = m * n;
       int count = 0;
       for(int i = 0; i < n; i++)
       {
           for(int j = 0; j < m; j++)
           {
               if(a[i][j] == 0)
               {
                   count++;
               }
           }
       }
       if(count != element)
       {
           printf("This is not a zerro matrix");
       }
       else
       {
            printf("This is a zerro Matix, count is: %d", element);   
       }
    return 0;
}
