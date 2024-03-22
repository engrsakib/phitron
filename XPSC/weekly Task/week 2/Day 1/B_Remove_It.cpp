#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> print;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != x)
            print.push_back(v[i]);
    }
    for (int ss : print)
    {
        cout << ss << " ";
    }
    cout << "\n";
    return 0;
}