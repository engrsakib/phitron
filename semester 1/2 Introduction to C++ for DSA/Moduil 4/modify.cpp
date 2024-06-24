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
    string a = "Md. Nazmus";
    string b = " Sakib";
    cout << a + b << endl;
    a.append("_DIU");
   // cout << a + b << endl;
    cout << a.size() << endl;
    a.push_back('U');
    a.erase(15,1);
    //a.insert(4, "sa ");
    cout << a << endl;
    return 0;
}
