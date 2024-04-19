#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
char getAlphabet(int digit)
{
    if (digit == 0)
        return 'J';
    else
        return 'A' + digit - 1;
}

string convertToAlphabets(int number)
{
    string result = "";
    while (number > 0)
    {
        int digit = number % 10;
        result += getAlphabet(digit);
        number /= 10;
    }
    //reverse(result.begin(), result.end());
    return result;
}
int main()
{
    // _Created :  18 April 2024 ||   14:52:02
    // _File    :  recerse_code.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int number;

    while (cin >> number)
    {
        cout << convertToAlphabets(number) << endl;
    }
    return 0;
}