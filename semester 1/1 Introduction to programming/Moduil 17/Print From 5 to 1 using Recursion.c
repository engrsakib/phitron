#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
void fun(int i)
{
    if(i == 0)
    {
        return;
    }
    printf("%d ",i);
    fun(i-1);
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       fun(5);
    return 0;
}
