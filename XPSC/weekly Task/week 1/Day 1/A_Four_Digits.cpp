#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    
    while (a.size() < 4)
    {
        a = "0" + a;
    }
    cout << a << "\n";
    return 0;
}