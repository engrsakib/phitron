#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //prefix sum in array
    long long pre[n];
    pre[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }
    while(k--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum;
        if(l==0) sum = pre[r];
        else sum = pre[r] - pre[l-1];
        cout << sum << endl;
        cin.ignore();
    }
    return 0;
}
