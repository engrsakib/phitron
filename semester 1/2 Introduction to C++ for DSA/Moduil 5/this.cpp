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
class Preson{
    public:
        string name;
        int age;
        double hieght;

        Preson(string name, int age, double hieght)
        {
            this->name = name;
            this->age = age;
            this->hieght = hieght;
        }
        void print()
        {
            cout << name << " " << age << " " << hieght << endl;
        }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string name,n;
    int age,a;
    double height,h;
    getline(cin,name);
    cin >> age >> height;
    getchar();
    getline(cin,n);
    cin >> a >> h;
    Preson sakib(name, age, height);
    Preson humayra(n,a,h);
    sakib.print();
    humayra.print();
    return 0;
}
