#include <iostream>
#include <algorithm> 
#include <utility>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mn = min({a, b, c, d});
    int mx = max({b, c, a, d});
    cout << mn << " " << mx << endl;
    cout << "Before swap A: " << a <<" D: " << d << endl; 
    swap(a, d);
    cout << "After swap A: " << a <<" D: " << d << endl;
    
}