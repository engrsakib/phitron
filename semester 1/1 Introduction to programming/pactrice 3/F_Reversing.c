#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rarr[n];
    
    for (int i = 0; i < n; i++)
    {
        rarr[i] = arr[n - i - 1];
    }
    for(int i=0; i<n; i++){
        arr[i] = rarr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

