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
       long long a, b;
       scanf("%lld %lld", &a, &b);
       long long c = (a - b) * 365;
       int d = c % 100;
       printf("%lld\n%d",c, d);
    return 0;
}
