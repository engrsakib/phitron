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
       int flag = 1;
       if(n != m)
       {
           flag = 0;
       }
       else 
       {
           for(int i = 0; i < n; i++)
           {
               for(int j = 0; j < m; j++)
               {
                   if(i == j)
                   {
                       if(a[i][j] != a[0][0])
                       {
                           flag = 0;
                       }
                       continue;
                   }
                   if(a[i][j] != 0)
                   {
                       flag = 0;
                   }
               }
           }
       }
       if(flag) printf("This is Scelar matrix");
       else printf("This not Scelar matrix");
       
    return 0;
}
