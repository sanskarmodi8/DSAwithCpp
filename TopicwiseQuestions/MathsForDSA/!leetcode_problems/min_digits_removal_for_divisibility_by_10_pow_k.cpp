#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int minRemovals(string N, int K) {
    int divisor = pow(10, K);
    int n = N.length();
    int minRemovals = INT_MAX;

    // Generate all combinations of digits removal
    for (int i = 0; i < (1 << n); i++) {
        string newNumStr = "";
        int removedCount = 0;

        for (int j = 0; j < n; j++) {
            if (!(i & (1 << j))) {
                newNumStr += N[j];
            } else {
                removedCount++;
            }
        }

        // Check if the resulting number is divisible by 10^K
        if (!newNumStr.empty() && stoi(newNumStr) % divisor == 0) {
            minRemovals = min(minRemovals, removedCount);
        }
    }

    // Return the minimum removals or -1 if no valid number is found
    return (minRemovals == INT_MAX) ? -1 : minRemovals;
}

int main() {
    // Sample Test Cases
    string N;
    int K;

    // Test Case 1
    N = "10203027";
    K = 2;
    int result = minRemovals(N, K);
    if (result != -1) {
        cout << "Minimum required removals = " << result << endl;
    } else {
        cout << result << endl;
    }

    // Test Case 2
    N = "12345678";
    K = 1;
    result = minRemovals(N, K);
    if (result != -1) {
        cout << "Minimum required removals = " << result << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
