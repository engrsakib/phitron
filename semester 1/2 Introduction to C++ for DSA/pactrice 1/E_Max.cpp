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
int my_max(int *a, int x)
{
    int max1 = 0;
    for(int i = 0; i < x; i++)
    {
        max1 = max(max1, a[i]);
    }
    return max1;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = my_max(a, n);
    cout << m;
    return 0;
}
