#include <iostream>

using namespace std;

int main()
{
    int M, P, C, D;

    while (cin >> M >> P >> C >> D)
    {
        // Calculate the area of the farm field
        int area = (M * (C + 1)) + D;

        // Calculate the number of days Ramij initially planned to work
        int planned_days = area / P + (area % P != 0 ? 1 : 0);

        // Output the results
        cout << area << " " << planned_days << endl;
    }

    return 0;
}
