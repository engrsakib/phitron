#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a[20], b[10];
       scanf("%s %s",a ,b);
       int k = strlen(a);
       int n = strlen(b);
       int i = 0;
       while(i <= n)
       {
        a[k] = b[i];
        i++;
        k++;
       }
       printf("%s %s",a, b);
    return 0;
}
