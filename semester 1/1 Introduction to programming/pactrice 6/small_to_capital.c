#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
char change(char x)
{
    if(x <= 'z' && x >= 'a')
    {
       x = toupper(x);
    }
    else
    {
        x = tolower(x);
    }
    return x; 
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a;
       scanf("%c", &a);
       char b = change(a);
       printf("%c", b);
    return 0;
}
