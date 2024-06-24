#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       printf("Please Enter seven Integer Between (1 to 7): ");
       int a[7];
       for(int i = 0; i < 7; i++)
       {
        scanf("%d", &a[i]);
       }
       int count[7] = {0};
       for(int i = 0; i < 7; i++)
       {
        int val = a[i];
        count[val]++;
       }
       for(int i = 0; i < 7; i++)
       {
        printf("%d -- %d\n", i, count[i]);
       }
    return 0;
}
