#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//#include <conio.h>
#include <limits.h>
#include <ctype.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int a, b, c, d;
       scanf("%d %d %d %d", &a, &b, &c, &d);
       int sum = (a * b) - (c *d);
       printf("%d", sum);
    return 0;
}
