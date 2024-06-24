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
class mark
{
public:
    char name[20];
    int roll;
    char session[5];
    int batch;
    double math_mark;

    mark(char name[], int roll, char session[], int batch, double math_mark)
    {
        strcpy(this->name, name);
        this->roll = roll;
        strcpy(this->session, session);
        this->batch = batch;
        this->math_mark = math_mark;
    }
    void display()
    {
        cout << name << " " << roll << " " << session << " " << batch << " " << math_mark << endl;
    }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[] = "Md. Nazmus Sakib";
    char t[] = "Md. Tanvir Ahmed";
    char su[] = "Most. Mariam Khtun";
    char ss[] = "21-11";
    // mark a(s, 21, ss, 104, 94.89);
    // mark b(t, 34, ss, 104, 89.98);
    // mark c(su, 36, ss, 104, 95.12);

    // double print = max({sakib.math_mark, tanvir.math_mark, sushoma.math_mark});
    mark high_mark = a;
    if (b.math_mark > high_mark.math_mark)
    {
        high_mark = b;
    }
    if (c.math_mark > high_mark.math_mark)
    {
        high_mark = c;
    }

    high_mark.display();
    return 0;
}
