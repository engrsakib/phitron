#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long sum = 0;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        sum += a;
    }
    sort(v.begin(), v.end());
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {

            if (v[i] % 2 != 0)
            {
                sum -= v[i];
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}