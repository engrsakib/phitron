#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
// #include <conio.h>
#include <stddef.h>

using namespace std;
int *sort_it(int x)
{
    int *arr = new int[x];
    for (int i = 0; i < x; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + x, greater<int>());
    return arr;
    delete[] arr;
}

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    int *a = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    delete[] a; // Free allocated memory
    return 0;
}
