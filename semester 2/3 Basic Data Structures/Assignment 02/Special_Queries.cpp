#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    queue <string> q;
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        if(num == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if(num == 1)
        {
            if(!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}
