#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using ld = long double;
const ll maxN = 1e4;

using namespace std;

class Solution
{

public:
  void solve()
  {
    vector<ll> pw;
    for (int i = 1; i <= maxN; i++)
    {
      pw.push_back(pow(i, 3));
    }

    int t;
    cin >> t;
    while (t--)
    {
      ll x;
      cin >> x;
      bool found = false;

      for (int i = 0; i < maxN; i++)
      {
        if (pw[i] >= x)
        {
          break;
        }
        ll l = 0;
        ll r = maxN - 1; 
        ll mid;
        ll need = x - pw[i];
        bool right = false;
        while (l <= r)
        {
          mid = l + (r - l) / 2;
          if (pw[mid] == need)
          {
            right = true;
            break;
          }
          else if (pw[mid] > need)
          {
            r = mid - 1;
          }
          else
          {
            l = mid + 1;
          }
        }
        if (right)
        {
          found = true;
          break;
        }
      }

      if (found)
      {
        yes;
      }
      else
      {
        no;
      }
    }
  }
};
int main()
{
  // _Created :  28 April 2024 ||   19:24:33
  // _File    :  C_Sum_of_Cubes.cpp
  // Writer    :  Md. Nazmus Sakib(engrsakib)
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  Solution obj;
  obj.solve();

  return 0;
}