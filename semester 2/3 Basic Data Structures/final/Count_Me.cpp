#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        map<string, int> mp;
        // map<string, int> fc;
        string sen;
        getline(cin, sen);
        stringstream ss(sen);
        string word;
        int max_count = INT16_MIN;
        string most_count;
        while (ss >> word)
        {
            mp[word]++;
            if(mp[word] > max_count)
            {
                max_count = mp[word];
                most_count = word; 
            }
        }

        cout << most_count << " " << max_count << endl;
    }
    return 0;
}
