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

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int a, b;
    cin >> a >> b;
    int sum = a + b;
    int sub = a - b;
    long long int mux = a * b;
    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " * " << b << " = " << mux << endl;
    cout << a << " - " << b << " = " << sub;
    return 0;
}
