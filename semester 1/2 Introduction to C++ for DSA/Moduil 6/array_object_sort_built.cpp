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
class Student{
    public:
    string name;
    int id;
    double mark;
};
bool swp(Student left, Student right)
{
    if(left.mark > right.mark)
    {
        return true;
    }
    else if(left.mark < right.mark)
    {
        return false;
    }
    else 
    {
        if(left.id < right.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    Student *a = new Student[n];
    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].id >> a[i].mark;
    }
    sort(a, a + n, swp);
    for(int i = 0; i < n; i++)
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].mark << endl;
    }
    return 0;
}
