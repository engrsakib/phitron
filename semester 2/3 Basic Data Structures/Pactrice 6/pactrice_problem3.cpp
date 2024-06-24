#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    stack <int> s;
    stack <int> s1;
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
        int v = s.top();
        s1.push(v);
        s.pop();
    }
    while(!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    return 0;
}
