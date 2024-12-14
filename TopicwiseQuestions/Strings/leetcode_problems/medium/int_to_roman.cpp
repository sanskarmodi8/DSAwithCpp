#include <iostream>
#include <vector>
#include <string>
using namespace std;

// LEETCODE - https://leetcode.com/problems/integer-to-roman/

int main() {
    int num = 3749;
    vector<pair<int, string>> values = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string result = "";
    for (auto& val : values) {
        while (num >= val.first) {
            result += val.second;
            num -= val.first;
        }
    }

    cout << result << endl;
    return 0;
}
