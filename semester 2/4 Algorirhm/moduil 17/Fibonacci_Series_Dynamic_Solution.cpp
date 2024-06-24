#include <bits/stdc++.h>
#define ll long long

const ll N = 1e5;
ll df[N];
ll fibo(ll n)
{
    if (n == 0 or n == 1)
        return n;
    if (df[n] != -1)
        return df[n];
    ll ans = fibo(n - 1) + fibo(n - 2);
    df[n] = ans;
    return ans;
}

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    memset(df, -1, sizeof(df));
    ll n;
    cin >> n;
    cout << fibo(n);
    return 0;
}