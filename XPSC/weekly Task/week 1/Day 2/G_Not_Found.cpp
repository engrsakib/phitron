#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    cin >> st;
    int frq[26] = {0};
    for (int i = 0; i < st.length(); i++)
    {
        int cnt = st[i] - 'a';
        frq[cnt]++;
    }

    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (frq[i] == 0)
        {
            char aa = i + 'a';
            cout << aa << "\n";
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "None\n";
    return 0;
}