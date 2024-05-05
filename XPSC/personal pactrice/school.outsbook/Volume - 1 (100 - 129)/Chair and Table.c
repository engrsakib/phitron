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
       int x, y, t, t1;
       scanf("%d %d %d %d", &x, &y, &t, &t1);
       long long int ce = (t - (x * t1)) / y;
       printf("%lld Taka", ce);
    return 0;
}
