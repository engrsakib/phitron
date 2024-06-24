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
     int ar[n + 1];
     int i = 0;
     for(i; i < n; i++)
     {
        scanf("%d", &ar[i]);
     }  
    for(i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    int pos, val;
    scanf("%d", &pos);
    scanf("%d", &val);
    for(i = n; i >= pos + 1; i--)
    {
        ar[i] = ar[i - 1]; 
    }
    ar[pos] = val;
    for(i = 0; i < n + 1; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
