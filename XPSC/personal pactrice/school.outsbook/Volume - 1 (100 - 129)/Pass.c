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
       int x, y;
       scanf("%d %d", &x, &y);
       double sum = ((x - y) * 100.00) / x;
       printf("%.0lf%%", sum);
    return 0;
}
