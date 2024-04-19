#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  19 April 2024 ||   15:30:06
    // _File    :  B_BerSU_Ball.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> boy(n);
    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
    }
    int m;
    cin >> m;
    vector<int> girl(m);
    for (int i = 0; i < m; i++)
    {
        cin >> girl[i];
    }
    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((boy[i] == girl[j]) || (boy[i] + 1 == girl[j]) || (boy[i] == girl[j] + 1))
            {

                sum += 1;
                girl[j] = -7;
                break;
            }
            // cout << i << " " << j << br;
        }
    }
     cout << sum << br;
    return 0;
}