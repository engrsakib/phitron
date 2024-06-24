#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    list<int> my_List;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        my_List.push_back(val);
    }
    my_List.sort();
    my_List.unique();
    for (int val : my_List)
    {
        cout << val << " ";
    }
    return 0;
}
