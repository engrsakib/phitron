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
/*int fun(int x, int z, int y)
{
    
}*/
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b;
    char s;
    cin >> a >> s >> b;
    //int aa = fun(a,b,s);
    int result = 0;
    if(s == '=')
    {
        result = a == b;
    }
    else if(s == '<')
    {
        result = a < b;
    }
    else 
    {
        result = a > b;
    }
    cout << (result ? "Right" : "Wrong");
    return 0;
}
