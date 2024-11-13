#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// LEETCODE - https://leetcode.com/problems/sorting-the-sentence/

int main() {
    string s = "is2 sentence4 This1 a3";
    
    vector<string> words;
    int i = 0;
    while (i < s.length()) {
        string word = "";
        while (i < s.length() && s[i] != ' ') {
            word += s[i];
            i++;
        }
        words.push_back(word);
        i++;
    }

    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return a.back() < b.back();
    });

    for (string &word : words) {
        word.pop_back();
    }

    string ans = "";
    for (const string &word : words) {
        ans += word + " ";
    }

    if (!ans.empty()) {
        ans.pop_back();
    }

    cout << ans << endl;
    return 0;
}
