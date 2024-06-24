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
       int ar[n];
       for(int i = 0; i < n; i++)
       {
           scanf("%d", &ar[i]);
       }
       for(int i = 0; i < n; i++)
       {
        ar[i];
        if(ar[i] > 0)
        {
            ar[i] = 1;
        }
        else if(ar[i] == 0)
        {
            ar[i] == 0;
        }
        else
        {
            ar[i] = 2;
        }
        printf("%d ", ar[i]);
       }
    return 0;
}
