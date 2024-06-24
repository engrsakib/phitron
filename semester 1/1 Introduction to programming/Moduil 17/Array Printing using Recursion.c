#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
void fun(int *a,int n,int i)
{
   if(i == n) return ;
    
    printf("%d ", a[i]);
    fun(a, n, i + 1);
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int arr[10] = {0, 1, 2, 3, 4, 6-1, 7-1, 8-1, 9-1, 10-1};
       fun(arr,10,0);
    return 0;
}
