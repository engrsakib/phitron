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
       int e, b, m;
       scanf("%d %d %d", &m, &e, &b);
       int all = 100 - (m + e - b);
       printf("%d%%", all);
    return 0;
}
