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
       int s1, d1, d2, s2;
       scanf("%d %d %d %d", &s1, &d1, &d2, &s2);
       int days = ((s1 * d1) / (s1 + d2));
       printf("%d days");
    return 0;
}
