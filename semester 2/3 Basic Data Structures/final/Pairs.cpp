#include <bits/stdc++.h>

using namespace std;
// Studnet Name compair

class gtr
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        if (a.first != b.first)
           return a.first < b.first;

        return a.second > b.second;
    }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <pair<string, int>>v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin >> name >> roll;
        
        v.push_back({name, roll});
    }
    sort(v.begin(), v.end(), gtr());
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
