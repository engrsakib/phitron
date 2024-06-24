#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n;
       scanf("%d", &n);
       for(int i = 0; i < n; i++)
       {
        char arr[100];
        scanf("%s", arr);
        int lenght = strlen(arr);
        if(lenght > 10){
            int lengh = lenght - 2;
            printf("%c%d%c\n", arr[0], lengh, arr[lenght - 1]);
        }else{
            printf("%s\n",arr);
        }
       }
    return 0;
}
