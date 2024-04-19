#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   14:45:14
    // _File    :  amostring_numver.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int number;

    while (cin >> number)
    {
        int originalNumber = number;
        int numberOfDigits = 0;
        int sum = 0;

        // Count the number of digits
        while (number > 0)
        {
            numberOfDigits++;
            number /= 10;
        }

        // Calculate the sum of digits raised to the power of the number of digits
        number = originalNumber;
        while (number > 0)
        {
            int digit = number % 10;
            sum += pow(digit, numberOfDigits);
            number /= 10;
        }

        // Check if it's an Armstrong number
        if (sum == originalNumber)
        {
            cout << originalNumber << " is an Armstrong Number" << endl;
        }
        else
        {
            cout << originalNumber << " is not an Armstrong Number" << endl;
        }
    }
    return 0;
}