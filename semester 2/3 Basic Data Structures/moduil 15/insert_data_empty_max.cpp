#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int crr_index = v.size() - 1;
        while (crr_index != 0)
        {
            int prr_index = (crr_index - 1) / 2;
            if (v[prr_index] < v[crr_index])
            {
                swap(v[prr_index], v[crr_index]);
            }
            else
            {
                break;
            }
            crr_index = prr_index;
        }
    }

    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}
