#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
int fun(int x)
{
    if(x < 0)
    {
        return x * -1;
    }
    else
    {
        return x;
    }
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n;
       scanf("%d", &n);
       printf("%d",fun(n));
    return 0;
}
