#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b;
    cin >> a >> b;
    long long count = 0;
    while (a <= b)
    {
        a *= 2;
        count++;
    }
    cout << count << endl;
    return 0;
}