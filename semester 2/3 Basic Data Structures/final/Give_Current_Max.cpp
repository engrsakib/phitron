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
        if (a.mark < b.mark)
            return true;
        else if (a.mark > b.mark)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
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
    int q;
    cin >> q;
    while (q--)
    {
        int o;
        cin >> o;
        if (o == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            else
                cout << "Empty" << endl;
        }
        else if (o == 1)
        {
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            else
                cout << "Empty" << endl;
        }
        else if (o == 0)
        {
            string name;
            int roll;
            double mark;
            cin >> name >> roll >> mark;
            Student obj(name, roll, mark);
            pq.push(obj);

            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}
