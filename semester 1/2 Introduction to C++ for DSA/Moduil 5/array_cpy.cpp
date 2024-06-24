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
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        (*this).name = name;
        this->age = age;
    }
    void print()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Person *sakib = new Person("Sakib", 75);
    Person *barkat = new Person("Barkat", 75);
    *sakib = *barkat;
    delete barkat;
    (*sakib).print(); 
    return 0;
}
