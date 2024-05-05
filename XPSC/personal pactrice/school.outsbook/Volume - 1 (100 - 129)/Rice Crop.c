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
       int p1, d, p2;
       scanf("%d %d %d", &p1, &d, &p2);
       int s = (d * p1) / p2;
       printf("%d Days", s);
    return 0;
}
