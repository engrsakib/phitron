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
class Student
{
public:
    string name;
    int id;
    double mark;
    // Student(string name, int id, double mark)
    // {
    //     this->name = name;
    //     this->mark = mark;
    //     this->id = id;
    // }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    Student *a = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].id >> a[i].mark;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].id << " " << a[i].mark << endl;
    }
    //Student sakib("Sakib",4,96.23);
   // cout << sakib.name;
    delete a;
    return 0;
}
