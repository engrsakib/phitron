#include <bits/stdc++.h>

using namespace std;
void greatest_heights(const vector<int> &heig)
{
    int n = heig.size();
    vector <int> before(n), after(n);

    before[0] = -1;
    int max_before = heig[0];
    for (int i = 1; i < n; i++)
    {
        before[i] = max_before;
        max_before = max(max_before, heig[i]);
    }

    after[n - 1] = -1;
    int max_after = heig[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        after[i] = max_after;
        max_after = max(max_after, heig[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        cout << before[i] << " " << after[i] << endl;
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    greatest_heights(heights);
    return 0;
}
