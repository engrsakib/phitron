#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> territories(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> territories[i];
        }

        int min_time = 1e9;
        int min_clan = 0;

        for (int i = 1; i <= n; ++i)
        {
            int left = count_if(territories.begin(), territories.end(), [&](int x)
                                { return x == i; });
            int right = n - left;

            int time = max(left, right);
            if (time < min_time)
            {
                min_time = time;
                min_clan = i;
            }
        }

        cout << min_clan << " " << min_time << endl;
    }

    return 0;
}
