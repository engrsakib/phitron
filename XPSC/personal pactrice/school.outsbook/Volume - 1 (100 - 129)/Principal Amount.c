#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int p, i, y;
        scanf("%d %d %d", &p, &i, &y);
        int re = (i * 100) / (p * y);
        printf("%d", re);
    return 0;
}
