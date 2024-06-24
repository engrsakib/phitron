#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
void fun(int x)
{
    
    if(x > 0)
    {
        printf("I love Recursion\n");
        fun(x - 1);
    }
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n;
     scanf("%d", &n);
     fun(n);  
    return 0;
}
