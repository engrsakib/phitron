#include <bits/stdc++.h>

using namespace std;
class Solution{
    public:
        bool serve(string word)
        {
            unordered_set<char> un_set(word.begin(), word.end());
            int count = un_set.size();

            if(count % 2 == 0) return true;
            return false;
        }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string word;
    cin >> word;

    //cout << obj.serve(word);
    if(obj.serve(word)) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    return 0;
}