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
     int n;
     scanf("%d", &n);
     int i = 1, sum = 0;
     do{
        sum += i * i;
        i++;
     }while (i <= n);
     printf("%d", sum);
       
    return 0;
}
