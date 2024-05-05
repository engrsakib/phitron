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
     int a;
     scanf("%d", &a);
     int fast = a / 100;
     int last = a % 100;

     printf("%d\n%d",fast, last);

    return 0;
}
