#include <iostream>
#include <vector>
#include <string>
using namespace std;

// LEETCODE - https://leetcode.com/problems/roman-to-integer/

int romanToInt(string s) {
    int ans = 0;
    vector<int> values(128, 0);
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    for (int i = 0; i < s.length(); i++) {
        if (i > 0 && values[s[i]] > values[s[i - 1]]) {
            ans += values[s[i]] - 2 * values[s[i - 1]];
        } else {
            ans += values[s[i]];
        }
    }

    return ans;
}

int main() {
    string romanNumeral = "MCMXCIV";
    cout << romanToInt(romanNumeral) << endl;
    return 0;
}
