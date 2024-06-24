#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string name;
    getline(cin, name);

    stringstream ss(name);
    string word;
    string find = "Jessica";
    int flag = 0;
    while (ss >> word)
    {
        if (word == find)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
