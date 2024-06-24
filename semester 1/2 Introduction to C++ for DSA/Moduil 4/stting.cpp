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
    string name = "Md. Nazmus Sakib";
    name += " Barkat";
    string name2 = "Md. Arman arif siddiki";
    name += " Rahat";
    string s;
    cin >> s;
    if(name != name2)
    {
        cout << endl << name;
    }
    else cout << name2 << endl;
    cout << s;
    
    return 0;
}
