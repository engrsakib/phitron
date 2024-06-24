#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n;
       scanf("%d", &n);
       if(n > 0)
       {
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                printf("%d\n", i);
            }
        }
       }
    return 0;
}
