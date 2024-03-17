#include <bits/stdc++.h>

using namespace std;
bool is_sum(string num)
{

    int left = 0, right = 0;
    for (int i = 0; i < 3; i++)
    {
        left += num[i] - '0';
    }
    for (int i = 3; i < 6; i++)
    {
        right += num[i] - '0';
    }
    return left == right;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;

        if (is_sum(num))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}