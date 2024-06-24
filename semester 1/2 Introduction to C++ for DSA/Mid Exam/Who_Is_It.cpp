#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
// #include <conio.h>
#include <stddef.h>

using namespace std;
class Student
{
public:
    int id;
    char *name = new char[100];
    char *section = new char[1];
    int mark;
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        Student std[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> std[i].id >> std[i].name >> std[i].section >> std[i].mark;
        }
        int hight_marks = -1;
        int high_id = -1;
        for (int i = 0; i < 3; i++)
        {
            if (std[i].mark > hight_marks)
            {
                hight_marks = std[i].mark;
                high_id = std[i].id;
            }
            else if (std[i].mark == hight_marks)
            {
                if (std[i].id < high_id)
                {
                    high_id = std[i].id;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (std[i].id == high_id && std[i].mark == hight_marks)
            {
                cout << std[i].id << " " << std[i].name << " " << std[i].section << " " << std[i].mark << endl;
            }
        }
    }
    return 0;
}
