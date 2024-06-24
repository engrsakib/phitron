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
{   public:
    int clas;
    int roll;
    double gpa;
    Student(int clas, int roll, double gpa)
    {
        this->clas = clas;
        this->roll = roll;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student sakib(15, 21, 3.45);
    return sakib;
} 
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student ans = fun();
    cout << ans.clas << " " << ans.roll << " " << ans.gpa;
    return 0;
}
