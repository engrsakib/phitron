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
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a;
    getline(cin, a);
    int count = 0;
    bool in_word = false;
    for (char c : a)
    {
        if (c == ' ' || c == '!' || c == ',' || c == '.' || c == '?')
        {
            if (in_word)
            {
                count++;
                in_word = false;
            }
        }
        else
        {
            in_word = true;
        }
    }
    if (in_word)
    {
        count++;
    }
    cout << count;
    return 0;
}
