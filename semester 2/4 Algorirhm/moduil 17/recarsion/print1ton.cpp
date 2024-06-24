#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    void print(int arr[], int n, int i)
    {
        if (i > n)
            return;
        cout << arr[i] << " ";
        print(arr, n, i + 1);
        cout << arr[i] << " ";
    }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    Solution obj;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    obj.print(arr, n, 1);
    return 0;
}
