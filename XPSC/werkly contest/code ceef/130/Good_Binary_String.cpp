#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isGood(const string &s)
{
    int n = s.size();
    char current = s[0];
    int count = 1;

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == current)
        {
            count++;
        }
        else
        {
            if (count % 2 != 0)
                return false; // Must be even-length
            current = s[i];
            count = 1;
        }
    }

    return count % 2 == 0; // Last count must also be even
}

void solve(const string &s, int n)
{
    if (isGood(s))
    {
        cout << "0\n\n"; // Already good, no need to flip
        return;
    }

    // Try flipping an alternating sequence
    vector<int> odd, even;
    for (int i = 0; i < n; ++i)
    {
        if ((i + 1) % 2 == 1)
        {
            odd.push_back(i + 1); // 1-based index
        }
        else
        {
            even.push_back(i + 1); // 1-based index
        }
    }

    // Check if flipping all odd-indexed or even-indexed bits can make it good
    string flipOdd = s, flipEven = s;
    for (int idx : odd)
    {
        flipOdd[idx - 1] = (s[idx - 1] == '0' ? '1' : '0');
    }
    for (int idx : even)
    {
        flipEven[idx - 1] = (s[idx - 1] == '0' ? '1' : '0');
    }

    if (isGood(flipOdd))
    {
        cout << odd.size() << '\n';
        for (int idx : odd)
        {
            cout << idx << ' ';
        }
        cout << '\n';
        return;
    }
    else if (isGood(flipEven))
    {
        cout << even.size() << '\n';
        for (int idx : even)
        {
            cout << idx << ' ';
        }
        cout << '\n';
        return;
    }

    cout << "-1\n"; // If neither approach works
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;
        solve(S, N);
    }
    return 0;
}
