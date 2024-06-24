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
class Studen
{
    public:
    char name[100];
    int roll;
    double CGPA;
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Studen a, b;
    cin.getline(b.name, 100);
    cin >> b.roll >> b.CGPA;
    getchar();
    cin.getline(a.name, 100);
    //getchar();
    cin >> a.roll >> a.CGPA;

    cout << b.name << " " << b.roll << " " << b.CGPA << endl;
    cout << a.name << " " << a.roll << " " << a.CGPA << endl; 
    return 0;
}
