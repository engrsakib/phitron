#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
int fun(char *a, int i)
{
    if(a[i] == '\0')
    {
        return 0;
    }
    int l = fun(a, i + 1);
    return l + 1;
    
}
int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      char aa[] = "Md. Nazmus Sakib";
      printf("%d",fun(aa, 0));
    return 0;
}
