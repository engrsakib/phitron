#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       char letter[100001];
       scanf("%s", letter);
       int length = strlen(letter);
       int count = 0;
       for(int i = 0; i < length; i++)
       {
        if ((letter[i] >= 'a' && letter[i] <= 'z') && letter[i] != 'a' && letter[i] != 'e' && letter[i] != 'i' && letter[i] != 'o' && letter[i] != 'u')
        {
            count++;
        }
       }
       printf("%d",count);
    return 0;
}
