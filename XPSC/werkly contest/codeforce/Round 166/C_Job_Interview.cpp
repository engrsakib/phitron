#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Candidate {
    int index;
    long long a, b;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int totalCandidates = n + m + 1;

        vector<long long> a(totalCandidates);
        vector<long long> b(totalCandidates);
        vector<Candidate> candidates(totalCandidates);

        for (int i = 0; i < totalCandidates; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < totalCandidates; ++i) {
            cin >> b[i];
            candidates[i] = {i, a[i], b[i]};
        }

        vector<long long> results(totalCandidates);

        for (int excluded = 0; excluded < totalCandidates; ++excluded) {
            vector<Candidate> remainingCandidates;

            for (int i = 0; i < totalCandidates; ++i) {
                if (i != excluded) {
                    remainingCandidates.push_back(candidates[i]);
                }
            }

            sort(remainingCandidates.begin(), remainingCandidates.end(), [](const Candidate &c1, const Candidate &c2) {
                return c1.a - c1.b > c2.a - c2.b;
            });

            long long programmerSkill = 0, testerSkill = 0;
            int programmersAssigned = 0, testersAssigned = 0;

            for (const auto &candidate : remainingCandidates) {
                if (programmersAssigned < n && (candidate.a >= candidate.b || testersAssigned >= m)) {
                    programmerSkill += candidate.a;
                    ++programmersAssigned;
                } else {
                    testerSkill += candidate.b;
                    ++testersAssigned;
                }
            }

            results[excluded] = programmerSkill + testerSkill;
        }

        for (const auto &res : results) {
            cout << res << " ";
        }
        cout << endl;
    }

    return 0;
}
