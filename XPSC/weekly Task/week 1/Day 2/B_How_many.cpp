#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int cnt = 0;

    for (int i = 0; i <= a; i++)
    {
        if (i <= a)
        {
            for (int j = 0; j <= a; j++)
            {
                if (i + j <= a)
                {
                    for (int k = 0; k <= a; k++)
                    {
                        if (i + j + k <= a and i * j * k <= b)
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}