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
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool first_word = true;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (!first_word)
        {
            cout << " ";
        }
        else
        {
            first_word = false;
        }
        cout << word;
    }

    return 0;
}
