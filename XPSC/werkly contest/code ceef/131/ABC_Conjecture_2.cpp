#include <iostream>
#include <string>

using namespace std;

int min_moves_to_reduce(const string& s) {
    int moves = 0;
    int count_a = 0, count_b = 0, count_c = 0;

    for (char ch : s) {
        if (ch == 'a') {
            count_a++;
        } else if (ch == 'b') {
            if (count_a > 0) {
                count_a--;
            } else {
                count_b++;
            }
        } else {  // ch == 'c'
            if (count_b > 0) {
                count_b--;
            } else {
                count_c++;
            }
        }
    }

    moves = count_a + count_b + count_c;
    return moves;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int total_moves = 0;

        for (int L = 0; L < N; L++) {
            for (int R = L; R < N; R++) {
                total_moves += min_moves_to_reduce(S.substr(L, R - L + 1));
            }
        }

        cout << total_moves << endl;
    }

    return 0;
}
