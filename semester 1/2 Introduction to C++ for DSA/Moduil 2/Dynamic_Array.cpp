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
int * fun()
{
    int * a = new int(5);
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int * b = fun();
    for(int i = 0; i < 5; i++)
    {
        cout <<  b[i] << " ";
    }
    return 0;
}
