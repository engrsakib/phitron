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
      int x, p;
      scanf("%d %d", &p, &x);
      double sum = (x * 100) / (100 + p);
      printf("%.0lf", sum); 
    return 0;
}
