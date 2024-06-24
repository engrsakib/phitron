#include <bits/stdc++.h>

using namespace std;
#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> water_height(vector<long long> &height)
{
    priority_queue<long long> pq;
    long long first_max = LONG_MIN, second_max = LONG_MIN;
    long long first_index = LONG_MIN, second_index = LONG_MIN;
    bool was_first = false, was_second = false;

    for (int i = 0; i < height.size(); i++)
    {
        pq.push(height[i]);
    }

    first_max = pq.top();
    pq.pop();
    second_max = pq.top();
    pq.pop();

    for (int i = 0; i < height.size(); i++)
    {
        if (first_max == height[i])
        {
            first_index = i;
            if (!was_second)
            {
                was_first = true;
            }
        }
        else if (second_max == height[i])
        {
            second_index = i;
            if (!was_first)
            {
                was_second = true;
            }
        }
    }

    if (was_first and !was_second)
        return {first_index, second_index};
    else
        return {second_index, first_index};
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> height(n);

        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }

        auto result = water_height(height);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
