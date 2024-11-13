#include <iostream>
#include <string>
using namespace std;

// LEETCODE - https://leetcode.com/problems/longest-palindrome/description/

int main() {
    string s;
    cin >> s;

    int freq[128] = {0};
    for (char c : s) {
        freq[c]++;
    }

    int len = 0;
    bool odd_count = false;

    for (int i = 0; i < 128; i++) {
        if (freq[i] % 2 == 0) {
            len += freq[i];
        } else {
            len += freq[i] - 1;
            odd_count = true;
        }
    }

    cout << (odd_count ? len + 1 : len) << endl;
    return 0;
}
