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
      double a;
      scanf("%lf", &a);
      double b = a - (int)a;
      b *= 100;
      printf("%d Taka %.0lf Paisa",(int)a, b);
    return 0;
}
