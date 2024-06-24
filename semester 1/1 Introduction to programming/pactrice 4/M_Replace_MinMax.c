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
       int arr[n];
       for(int i = 0; i < n; i++)
       {
        scanf("%d", &arr[i]);
       }
       int minindex = 0, maxindex = 0;
       for(int i = 1; i < n; i++)
       {
        if(arr[i] < arr[minindex]){
            minindex = i;
        }if(arr[i] > arr[maxindex]){
            maxindex = i;
        }
       }
       int temp = arr[minindex];
       arr[minindex] = arr[maxindex];
       arr[maxindex] = temp;
       for(int i = 0; i < n; i++){
           printf("%d ", arr[i]);
       }
       printf("\n");
       
    return 0;
}
