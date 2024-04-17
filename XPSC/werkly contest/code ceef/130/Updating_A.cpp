#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        vector<int> A(N);
        long long totalSum = 0;
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
            if (A[i] > 0)
            {
                totalSum += A[i];
            }
        }

        // Bob can always end the game on his turn by taking the sum of all elements remaining
        cout << abs(totalSum) << endl;
    }
    return 0;
}
