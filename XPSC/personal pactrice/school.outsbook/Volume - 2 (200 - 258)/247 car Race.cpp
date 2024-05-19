#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, hour, speed;
    cin >> n >> hour >> speed;
    int truck = ((n - (hour * speed)) / (hour * 2));
    cout << truck << " " << truck + speed << endl;

    return 0;
}