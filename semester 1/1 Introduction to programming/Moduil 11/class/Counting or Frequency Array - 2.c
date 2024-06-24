#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char a[20];
       scanf("%s", a);
       int count[26] = {0};
       for(int i = 0; i < strlen(a); i++)
       {
        int val = count[i] - 'a';
        count[val]++;
       }
       for(int i = 0; i < 26; i++)
       {
        if(count[i] != 0)
        {
          printf("%c -- %d\n", i + 'a', count[i]);
        }
        //printf("%c -- %d\n", i + 'a', count[i]);
       }
    return 0;
}
