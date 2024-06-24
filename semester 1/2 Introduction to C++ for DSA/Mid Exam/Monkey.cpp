#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
// #include <conio.h>
#include <stddef.h>

using namespace std;
void fun(char *string, int max_size)
{
    int length = strlen(string);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (string[i] != ' ')
        {
            string[count++] = string[i];
        }
    }
    string[count] = '\0';
    sort(string, string + count);
    cout << string << endl;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int max_size = 100001;
    char *line = new char[max_size];
    while (cin.getline(line, max_size))
    {
        fun(line, max_size);
    }
    delete[] line;
    return 0;
}
