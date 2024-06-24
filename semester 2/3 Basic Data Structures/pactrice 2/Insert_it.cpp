#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> vr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vr1[i];
    }
    int m;
    cin >> m;
    vector<int> vr2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> vr2[i];
    }
    int x;
    cin >> x;

    vr1.insert(vr1.begin() + x, vr2.begin(), vr2.end());

    for (int i = 0; i < n + m; i++)
    {
        cout << vr1[i] << " ";
    }
    return 0;
}
