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
    // s.find("EGYPT");
    while (s.find("EGYPT") != -1)
    {
        s.replace(s.find("EGYPT"), 5, " ");
    }
    cout << s << endl;
    return 0;
}
