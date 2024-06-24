#include <bits/stdc++.h>

using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
        int math_mark;
        int eng_mark;
};
bool sakib(Student left, Student right)
{
    if(left.eng_mark != right.eng_mark)
    {
        return left.eng_mark > right.eng_mark;
    }
    else if(left.math_mark != right.math_mark)
    {
       return left.math_mark > right.math_mark;
    }
    else
    {
        return left.id < right.id;
    }
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    Student *arr = new Student[n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_mark >> arr[i].eng_mark;
    }
    sort(arr, arr + n, sakib);
    for(int i = 0; i < n; i++)
    {
        cout <<  arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id  << " " << arr[i].math_mark << " " << arr[i].eng_mark << endl;
    }
    return 0;
}
