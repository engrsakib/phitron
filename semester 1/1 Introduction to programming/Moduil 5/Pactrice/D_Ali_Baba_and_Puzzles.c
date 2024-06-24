#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a + b * c == d)
    {
        printf("YES");
    }   
    else if(a + b - c == d)
    {
        printf("YES");
    }
    else if(a - b + c == d)
    {
        printf("YES");
    }
    else if(a - b * c == d)
    {
        printf("YES");
    }
    else if(a * b + c == d)
    {
        printf("YES");
    }
    else if(a * b - c == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
