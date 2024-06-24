#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
#include <conio.h>
#include <stddef.h>

using namespace std;
void my_delete(int x)
{   int *arr = new int[x];
    int *brr = new int[x];
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    int n;
    cin >> n;
    delete[] arr;
    arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = brr[i];
    }
    delete[] brr;
    for(int i = x; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    my_delete(n);
    return 0;
}
