#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char n;
       scanf("%c",&n);
       if('A' <= n && n <= 'Y')
       {
        n = n + 1;
       }
       else if(n == 'Z')
       {
           n = n + 7;
       }
       else if('a' <= n && n <= 'y')
       {
           n = n + 1;
       }
       else
       {
        n = n - 25;
       }
       printf("%c", n);
    return 0;
}
