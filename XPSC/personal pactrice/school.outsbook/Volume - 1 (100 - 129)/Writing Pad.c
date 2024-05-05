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
      int d, x, y;
      scanf("%d %d %d", &d, &x, &y);
      double price = ((x / d)/12) * y;
      printf("%.0lf Taka", price);

    return 0;
}
