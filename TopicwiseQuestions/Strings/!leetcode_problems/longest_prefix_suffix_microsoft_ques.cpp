#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestPrefixSuffix(string &s) {
    int m = s.size();
    vector<int> lps(m, 0); 
    int prefix = 0, suffix = 1;

    while (suffix < m) {
        if (s[suffix] == s[prefix]) {
            prefix++;
            lps[suffix] = prefix;
            suffix++;
        } else {
            if (prefix != 0) {
                prefix = lps[prefix - 1];
            } else {
                lps[suffix] = 0;
                suffix++;
            }
        }
    }

    return lps.back(); 
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int result = longestPrefixSuffix(s);
    cout << "The length of the longest prefix which is also a suffix is: " << result << endl;

    return 0;
}
