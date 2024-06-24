#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a[100], b[100];
       scanf("%s %s", a, b);
      int val = strcmp(a, b);
      if(val < 0)
      {
        printf("A is small\n");
      }
      else if(val > 0)
      {
        printf("B is Small\n");
      }
      else
      {
        printf("Equal\n");
      }
    return 0;
}
