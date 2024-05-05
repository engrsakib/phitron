#include <stdio.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int ar[7];
       int sum = 0;
       for(int i = 0; i < 7; i++)
       {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
       }
       sum = sum / 7;
       printf("%d", sum);
    return 0;
}
