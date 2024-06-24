#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while(t--)
    {
        set <int> v;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.insert(x);
        }
       // sort(v.begin(), v.end());
        for(auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
