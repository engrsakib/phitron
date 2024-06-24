#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int ar[5], n;
       //scanf("%d", &n);
       for(int i = 0; i < 5; i++)
       {
        scanf("%d", &ar[i]);
        //printf("ar[%d]\n",i);
       }
       printf("output:\n");
       for(int i = 0; i < 5; i++)
       {
        printf("%d\n",ar[i]);
       }
    return 0;
}
