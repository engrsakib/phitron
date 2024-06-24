#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n;
       printf("Enter Your array size: ");
       scanf("%d", &n);
       int arr[n];
       printf("Enter %d array element: ", n);
       for(int i = 0; i < n; i++)
       {
        scanf("%d", &arr[i]);
       }
       for(int i = 0; i < n - 1; i++)
       {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
       }
       for(int i = 0; i < n; i++)
       {
        printf("%d ", arr[i]);
       }
    return 0;
}
