#include <iostream>
using namespace std;

// Function to reverse a two-digit number
int reverseNumber(int n)
{
    return (n % 10) * 10 + (n / 10);
}

// Function to find the maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Function to find the minimum of two numbers
int min(int a, int b)
{
    return (a < b) ? a : b;
}

// Function to find the sum of digits of a number
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int M;
    while (cin >> M)
    {
        int reverseM = reverseNumber(M);
        int maximum = max(M, reverseM);
        int minimum = min(M, reverseM);
        int result = maximum - minimum;
        int sum = sumOfDigits(result);
        cout << sum << endl;
    }
    return 0;
}
