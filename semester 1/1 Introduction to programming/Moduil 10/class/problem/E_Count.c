#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a[1000001];
       scanf("%s", a);
       int sum = 0;
       for(int i = 0; i < strlen(a); i++)
       {
        sum += (a[i] - '0'); 
       }printf("%d", sum);
    return 0;
}
