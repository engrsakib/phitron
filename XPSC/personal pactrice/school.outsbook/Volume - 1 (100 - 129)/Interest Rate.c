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
     int x, y, i;
     scanf("%d %d %d", &x, &y, &i);
     double r = (double)(i) / (x * y) * 100;
     printf("%.0lf%%", r);
  
    return 0;
}
