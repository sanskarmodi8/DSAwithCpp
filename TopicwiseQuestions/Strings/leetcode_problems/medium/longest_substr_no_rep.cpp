#include <iostream>
#include <vector>
using namespace std;

// LEETCODE - https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

int lengthOfLongestSubstring(string s) {
    vector<bool> charExists(128, false); // Boolean array to track characters
    int max_len = 0, left = 0;

    for (int right = 0; right < s.length(); right++) {
        while (charExists[s[right]]) {
            charExists[s[left]] = false;
            left++;
        }
        charExists[s[right]] = true;
        max_len = max(max_len, right - left + 1);
    }
    return max_len;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl; // Output: 3
    return 0;
}
