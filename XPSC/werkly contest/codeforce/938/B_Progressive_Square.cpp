#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkProgressiveSquare(const vector<int> &b, int n, int c, int d)
{
    int a = b[0];
    for (int i = 0; i < n * n; ++i)
    {
        if (b[i] != a + (i % n) * d + (i / n) * c)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> b(n * n);
        for (int i = 0; i < n * n; ++i)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        if (checkProgressiveSquare(b, n, c, d))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
