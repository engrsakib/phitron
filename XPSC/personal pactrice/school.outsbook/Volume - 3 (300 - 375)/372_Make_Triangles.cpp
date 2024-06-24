#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N < 3) break; // Terminate if N is less than 3
        // Calculate the number of triangles
        long long result = (long long)N * (N - 1) * (N - 2) / 6;
        cout << result << endl;
    }
    return 0;
}
