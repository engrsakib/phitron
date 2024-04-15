#include <bits/stdc++.h>

using namespace std;
const long long N = 1e3;
int main()
{
    // _Created :  25 March 2024 ||   20:48:08
    // _File    :  A_Segment_with_Small_Sum.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<long long> s;
    long long arr[N];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    cout << 4 - s.size() << endl;
    return 0;
}