#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void solve()
    {
        
    int length, width, border_length, border_width;

    // Get the input values

    cin >> length >> width >> border_length >> border_width;

    // Calculate the area of the top and bottom edges
    int top_and_bottom_area = 2 * (length - 2 * border_length) * border_width;

    // Calculate the area of the left and right edges
    int left_and_right_area = 2 * (width - 2 * border_width) * border_length;

    // Total area of the edges
    int total_edge_area = top_and_bottom_area + left_and_right_area;

    // Print the result
    cout << total_edge_area << endl;
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   16:20:01
    // _File    :  231 - Pond Digging (II).cpp
    //Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}