#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i < 2 * n; ++i)
        {
            for (int j = 1; j < 2 * n; ++j)
            {
                // Determine whether to print '#' or '.'
                if(i == j)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < n; j++)
        //     {

        //     }
        // }
    }

    return 0;
}
