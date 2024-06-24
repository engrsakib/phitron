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
        getline(cin,a[i].name);
        cin >> a[i].id >> a[i].mark;
    }
    Student min;
    min.mark = INT_MAX;
    Student max;
    max.mark = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(a[i].mark < min.mark)
        {
            min = a[i];
            
        }
        if(a[i].mark > max.mark)
        {
            max = a[i];
            //break;
        }
    }
    cout << min.name << " " << min.id << " " << min.mark << endl;
    cout << max.name << " " << max.id << " " << max.mark << endl;
    return 0;
}
