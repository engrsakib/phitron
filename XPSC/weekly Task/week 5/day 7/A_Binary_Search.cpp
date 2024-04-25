#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void solve()
    {
         ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    
    sort(arr.begin(), arr.end());

    for (ll i = 0; i < k; i++) 
    
        ll q;
        cin >> q;

        
        ll left = 0, right = n - 1;
        bool found = false;
        while (left <= right) {
            ll mid = left + (right - left) / 2;
            if (arr[mid] == q) {
                found = true;
                break;
            } else if (arr[mid] < q) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        
        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    
    }
};
int main()
{
    // _Created :  25 April 2024 ||   20:28:35
    // _File    :  A_Binary_Search.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}