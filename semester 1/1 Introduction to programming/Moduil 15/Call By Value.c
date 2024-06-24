#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
void fun(int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d", x[i]);
    }
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int a[5] = {23, 78, 45, 34, 40};
       fun(a, 5);
        return 0;
}
