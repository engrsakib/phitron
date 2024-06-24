#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    stack <int> s;
    queue <int> b;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int val2;
        cin >> val2;
        b.push(val2);
    }
    bool flag = true; 
    if(s.size() != b.size()) flag = false;
    else
    {
        while(!s.empty())
        {
            if(s.top() != b.front())
            {
                flag = false;
                break;
            }
            s.pop();
            b.pop();
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
