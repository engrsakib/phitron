#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    string name;
    int clss;
    char section;
    int id;
    int math_mark;
    int english_mark;
};
int total_mark(Student mark)
{
    return mark.english_mark + mark.math_mark;
}
bool sakib(Student left, Student right)
{
    if (total_mark(left) != total_mark(right))
    {
        return total_mark(left) > total_mark(right);
    }
    else
    {
        return left.id < right.id;
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].clss >> arr[i].section >> arr[i].id >> arr[i].math_mark >> arr[i].english_mark;
    }
    sort(arr, arr + n, sakib);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].clss << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_mark << " " << arr[i].english_mark << endl;
    }
    return 0;
}
