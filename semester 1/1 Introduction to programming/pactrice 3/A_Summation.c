#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n, i; long long int sum = 0;
       scanf("%lld", &n);
      long long int ar[n];
       for(i = 0; i < n; i++)
       {
        scanf("%lld", &ar[i]);
        sum += ar[i];
       }
       if(sum <= 0)
       {
        sum *= -1;
        printf("%lld", sum);
       }else{
        printf("%lld", sum);
       }
       


    return 0;
}
