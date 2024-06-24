#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int isValidIdentifier(string s)
{
    if (s.empty())
        return 0;

    if (!(isalpha(s[0]) || s[0] == '_'))
        return 0;
    if (s[s.length() - 1] == '_')
        return 0;

    for (size_t i = 1; i < s.length(); i++)
    {
        if (!(isalnum(s[i]) || s[i] == '_'))
            return 0;
        if (s[i] == '_' && s[i - 1] == '_')
            return 0;
    }

    return 1;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for (int caseNum = 1; caseNum <= T; ++caseNum)
    {
        string S;
        getline(cin, S);

        if (isValidIdentifier(S))
        {
            cout << "Case " << caseNum << ": Valid" << endl;
        }
        else
        {
            cout << "Case " << caseNum << ": Invalid" << endl;
        }
    }

    return 0;
}
