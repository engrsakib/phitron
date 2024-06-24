#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
void fun(int i)
{
    if(i == 10) return;
    fun(i + 1);
    printf("%d ", i);
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       fun(1);
    return 0;
}
