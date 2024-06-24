#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
int sum(int x, int y)
{
    return x + y;
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int a, b;
      scanf("%d %d", &a, &b);
      int ans = sum(a, b);
      printf("%d", ans); 
    return 0;
}
