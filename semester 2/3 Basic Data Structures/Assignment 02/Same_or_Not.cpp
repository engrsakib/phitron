#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    stack <int> s;
    queue <int> q;
    int n, m;
    bool flag = true;
    cin >> n >> m;
    if(n != m) flag = false;
    else
    {
        for(int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.push(val);
        }
        for(int i = 0; i < m; i++)
        {
            int val2;
            cin >> val2;
            q.push(val2);
        }
        while(!s.empty())
        {
            if(s.top() != q.front())
            {
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }
    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}
