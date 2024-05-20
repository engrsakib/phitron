#include <iostream>
using namespace std;

int main()
{
    int X, M;
    while (cin >> X >> M)
    {
        int price = (X / 7) * M;
        cout << price << endl;
    }
    return 0;
}
