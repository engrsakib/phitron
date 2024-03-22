class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        string str1, str2;
        cin >> str1 >> str2;
        int f[26] = {0};
        int fa[26] = {0};
        for (int i = 0; i < s1.size(); i++)
        {
            int c = s1[i] - 'a';
            f[c]++;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            int c = s2[i] - 'a';
            fa[c]++;
        }
        int b = s2[0] - 'a';
        int a = (f[b] - fa[b]) + 1;
        cout << a << "\n";
        return 0;
    }
};