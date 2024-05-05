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
     int p, x, y;
     scanf("%d %d %d", &p, &x, &y);
     double sum = ((x * p * y) / 100);
     
     printf("%.0lf", sum);  
    return 0;
}
