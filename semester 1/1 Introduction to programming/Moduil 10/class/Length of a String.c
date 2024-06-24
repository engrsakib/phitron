#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a[100];
       fgets(a,18,stdin);
       /* int count = 0;
       for(int i = 0; a[i] != '\0'; i++)
       {
        count++;
       }printf("%d\n", count); */
       int st = strlen(a);
       printf("%d", st);
    return 0;
}
