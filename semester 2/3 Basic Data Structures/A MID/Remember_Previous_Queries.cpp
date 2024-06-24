#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    list <int> sakib;
    int q;
    cin >> q;
    while(q--)
    {
        int x; int v;
        cin >> x >> v;
        if(x == 0)
        {
            sakib.push_front(v);
        }
        else if(x == 1)
        {
            sakib.push_back(v);
        }
        else if(x == 2)
        {
           int size = sakib.size();
           if(v < size && v >= 0)
           {
            auto it = next(sakib.begin(), v);
            sakib.erase(it);
           }
        }
        cout << "L -> ";
        for(int i : sakib)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << "R -> ";
        for(auto it = sakib.rbegin(); it != sakib.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
