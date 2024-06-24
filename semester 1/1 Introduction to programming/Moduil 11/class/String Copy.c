#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a[20], b[20];
       scanf("%s %s", a, b);
       printf("Before Upfate: \n");
       printf("%s %s\n", a, b);
       int i = 0;
       int n = strlen(b);
       while(i <= n){
        a[i] = b[i];
        i++;
       }printf("After Update: \n");
       printf("%s %s\n", a, b);
       strcpy(a,b);
       printf("Using Function: %s %s",a, b);
    return 0;
}
