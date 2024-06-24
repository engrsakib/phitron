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
    string s;
    getline(cin,s);
    stringstream ss;
    ss << s;
    string word;
    int count = 0;
    while(ss >> word)
    {
        count++;
        cout<< word << endl;
    }
    cout << endl << count << endl;
    return 0;
}
