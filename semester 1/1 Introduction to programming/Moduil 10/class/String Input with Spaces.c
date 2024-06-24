#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     char a[5];
     //scanf("%s", &a);
     //gets(a);
     fgets(a,10,stdin);
     printf("Your string is: %s", a);  
    return 0;
}
