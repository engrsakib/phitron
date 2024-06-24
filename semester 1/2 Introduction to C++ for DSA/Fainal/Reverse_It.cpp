#include <bits/stdc++.h>

using namespace std;
class Student
{
    public:
        string name;
        int id;
        char section;
        int mark;
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    Student *arr = new Student[n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].id >> arr[i].section >> arr[i].mark;
    }
    for(i = 0; i < n / 2; i++)
    {
        swap(arr[i].section, arr[n - i -1].section);
    }
    for(i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].id << " " << arr[i].section << " " << arr[i].mark << endl;
    }
    delete arr;
    return 0;
}
