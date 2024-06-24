#include <bits/stdc++.h>

using namespace std;
// Studnet Name compair
class Student
{
public:
    string name;
    int roll;
    double mark;
    Student(string name, int roll, double mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};
class gtr
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.mark <= b.mark)
            return true;
        else if (a.mark > b.mark)
            return false;
        else
        {
            if (a.roll > b.roll)
                return false;
            else
                return true;
        }
    }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    priority_queue<Student, vector<Student>, gtr> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        double mark;
        cin >> name >> roll >> mark;
        Student obj(name, roll, mark);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().roll << " " << pq.top().name << " " << pq.top().mark << endl;
        pq.pop();
    }
    return 0;
}
