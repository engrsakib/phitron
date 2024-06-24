#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a[100], b[100];
       scanf("%s %s", a, b);
       int i = 0;
       while(1)
       {
            if(a[i] == '\0' && b[i] == '\0')
            {
                printf("Same\n");
                break;
            }
            else if(a[i] == '\0')
            {
                printf("A is small");
                break;
            }
            else if(b[i] == '\0')
            {
                printf("B is small");
                break;
            }
            
            if(a[i] == b[i])
            {
                i++;
            }
            else if(a[i] < b[i])
            {
                printf("A is small");
                break;            
            }
            else
            {
                printf("B is small");
                break;
            }
            

       }
    return 0;
}
