#include <bits/stdc++.h>

using namespace std;
class Student{
    public:
    string name;
    int id;
    int mark;
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
        cin >> a[i].name >> a[i].id >>a[i].mark;
    }
    for(int i = n; i >= 1; i--)
    {
        cout << a[10].id << " " << a[i].name << " " << a[i].mark << endl;
    }
    return 0;
}
