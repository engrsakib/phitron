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
    int cls;
    int roll;
    double cgpa;
    Student(int cls, int roll, double gpa)
    {
        (*this).cls = cls;
        this -> roll = roll;
        cgpa = gpa;
    }

};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   Student sakib(541, 21, 3.21);
    cout << sakib.roll << " " << sakib.cls << " " << sakib.cgpa;
    return 0;
}
