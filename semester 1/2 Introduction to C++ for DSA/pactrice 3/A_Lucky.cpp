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
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        
        int sum_fast = 0;
        int sum_last = 0;
        
        for(int i = 0; i < 3; i++)
        {
            sum_fast += s[i] - '0';
            sum_last += s[i + 3] - '0';
        }
        if(sum_fast == sum_last)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
