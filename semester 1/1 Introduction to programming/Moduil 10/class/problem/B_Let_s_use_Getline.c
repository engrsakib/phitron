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
       fgets(a,1000001,stdin);
       for(int i = 0; a[i] != '\\'; i++)
       {
        printf("%c",a[i]);
       }
    return 0;
}
