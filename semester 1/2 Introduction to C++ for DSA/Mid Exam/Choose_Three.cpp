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
void fun(int *arr, int n, int s)
{
    int found = 0;

    for (int i = 0; i < n - 2; i++)
    {
        int sum = s - arr[i];

        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[j] + arr[k] == sum)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    cout << (found ? "YES" : "NO") << endl;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        fun(arr, n, s);
    }
    return 0;
}
