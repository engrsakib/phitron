#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  28 March 2024 ||   21:08:23
    // _File    :  C_Clock_Conversion.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        string time24;
        cin >> time24;

        int hour = stoi(time24.substr(0, 2));
        int minute = stoi(time24.substr(3, 2));

        string period = (hour < 12) ? "AM" : "PM";

        hour %= 12;
        if (hour == 0)
            hour = 12; // 12 AM or 12 PM

        string hour_Str = (hour < 10 ? "0" : "") + to_string(hour);
        string minute_Str = (minute < 10 ? "0" : "") + to_string(minute);
        cout << hour_Str << ":" << minute_Str << " " << period << endl;
    }

    return 0;
}