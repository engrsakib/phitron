#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Function to perform modular exponentiation
long long powMod(long long a, long long b) {
    long long result = 1;
    // Perform the exponentiation using binary exponentiation
    while (b > 0) {
        // If the current bit of b is set, multiply result by a
        if (b & 1) {
            result = (result * a) % MOD;
        }
        // Square a and move to the next bit of b
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        // Input number of bags, balls, and the target ball number
        int N, M, K;
        cin >> N >> M >> N >> K;

        // Calculate the number of valid arrangements using modular exponentiation
        // The number of arrangements is N^(K-1) modulo 10^9 + 7
        long long ans = powMod(N, K - 1);
        // Output the result
        cout << ans << endl;
    }

    return 0;
}
