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
int cls;
int roll;
double cgp;
Student(int cls, int roll, double cgpa)
{
    this->cls = cls;
    this->roll = roll;
    this->cgp = cgpa;

}
};
Student *fun()
{
    Student *sakib = new Student(15, 21, 3.59);
    return sakib;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student *ans = fun();
    cout << ans->cls << " " << ans->roll << " " <<  ans->cgp;
    return 0;
}
