#include <iostream>
#include <vector>
#include <string>
using namespace std;

// LEETCODE - https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/

string smallestSubsequence(string s) {
    vector<int> freq(128, 0);
    vector<bool> visited(128, false);
    string result = "";

    for (char c : s) {
        freq[c]++;
    }

    for (char c : s) {
        freq[c]--;
        if (visited[c]) {
            continue;
        }

        while (!result.empty() && result.back() > c && freq[result.back()] > 0) {
            visited[result.back()] = false;
            result.pop_back();
        }

        result += c;
        visited[c] = true;
    }

    return result;
}

int main() {
    string s = "bcabc";
    cout << smallestSubsequence(s) << endl;
    return 0;
}
