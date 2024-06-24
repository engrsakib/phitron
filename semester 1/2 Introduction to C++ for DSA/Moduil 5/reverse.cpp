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
void print(stringstream &ss)
{
    string word;
    if(ss >> word)
    {
        print(ss);
        cout << word << endl;
    }
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);
    
    return 0;
}
