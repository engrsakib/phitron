#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int l;
       scanf("%d", &l);
       for(int i = 0; i < l; i++)
       {
        int f1, f2, d1, d2;
        scanf("%d %d %d", &f1, &f2, &d1);
        d2 = (f1 * d1) / (f1 + f2);
        d2 = d1 - d2;
        printf("%d\n", d2);
       }
    return 0;
}
