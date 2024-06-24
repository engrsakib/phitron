#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    queue <int> s;
    stack <int> a;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    while(!s.empty())
    {
        int temp = s.front();
        a.push(temp);
        s.pop();
    }
    while(!a.empty())
    {
        s.push(a.top());
        a.pop();
    }
    while(!s.empty())
    {
        cout << s.front() << " ";
        s.pop();
    }
    return 0;
}
