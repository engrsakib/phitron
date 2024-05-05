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
      int t, x, y;
      scanf("%d %d %d", &t, &x, &y);
      int sum = (t - (x + y)) * 12;
      
      printf("%d Taka", sum); 
    return 0;
}
