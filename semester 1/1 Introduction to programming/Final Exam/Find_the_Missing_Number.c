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
      int t;
      scanf("%d", &t);
      while(t--)
      {
        long long ans, a, b, c;
        scanf("%lld %lld %lld %lld", &ans, &a, &b, &c);
        long long mult = (a * b * c);
        long long miss = ans / mult;
        if(a * b * c * miss != ans)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n",miss);
        }

      } 
    return 0;
}
