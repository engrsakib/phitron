#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, C, S, M;
        cin >> N >> C >> S >> M;
        vector<int> weights(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> weights[i];
        }

        // Calculate cost without any swaps (natural greedy approach)
        int currentWeight = 0, countNoSwap = 0;
        for (int weight : weights)
        {
            if (currentWeight + weight <= M)
            {
                currentWeight += weight;
                countNoSwap++;
            }
            else
            {
                break;
            }
        }
        int minCost = countNoSwap * C; // Cost without swaps

        // Calculate minimum cost with optimal arrangement (sort weights)
        sort(weights.begin(), weights.end());
        currentWeight = 0;
        int countSorted = 0;
        for (int weight : weights)
        {
            if (currentWeight + weight <= M)
            {
                currentWeight += weight;
                countSorted++;
            }
            else
            {
                break;
            }
        }

        // If sorting allows more items to be picked up
        if (countSorted > countNoSwap)
        {
            // If more items can be picked with sorting
            // Cost of items picked + cost of sorting (optimal swap cost)
            int swapCost = 0; // We assume sorting can be done optimally; no swap costs are given here as required
            int costWithSort = countSorted * C + swapCost;
            minCost = min(minCost, costWithSort);
        }

        // Output the minimum cost found
        cout << minCost << endl;
    }
    return 0;
}
