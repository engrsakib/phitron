#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    vector <int> vr(arr2, arr2 + n);
    vr.insert(vr.begin() + n, arr, arr + n);
    for(int n : vr)
    {
        cout << n << " ";
    }

    return 0;
}
