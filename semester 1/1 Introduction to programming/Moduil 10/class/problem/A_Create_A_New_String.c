#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a[1001], b[1001];
       scanf("%s %s", a, b);
       int as = strlen(a);
       int bs = strlen(b);
       printf("%d %d\n",as, bs);
       printf("%s %s",a, b);
       
    return 0;
}
