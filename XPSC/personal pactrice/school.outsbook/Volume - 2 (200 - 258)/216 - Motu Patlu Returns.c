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
     int motu = n / 3;
     int patlu = n - (n / 3);
     printf("%d %d", patlu, motu);  
    return 0;
}
