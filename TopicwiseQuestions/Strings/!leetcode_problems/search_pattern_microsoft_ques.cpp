#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> buildLPS(string &pat) {
    int m = pat.size();
    vector<int> lps(m, 0);
    int prefix = 0, suffix = 1;

    while (suffix < m) {
        if (pat[suffix] == pat[prefix]) {
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
    return lps;
}

vector<int> searchPattern(string &pat, string &txt) {
    vector<int> lps = buildLPS(pat);
    vector<int> result;

    int i = 0, j = 0; 
    int n = txt.size(), m = pat.size();

    while (i < n) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
        }

        if (j == m) {
            result.push_back(i - j); 
            j = lps[j - 1];
        } else if (i < n && txt[i] != pat[j]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string txt, pat;
        cin >> txt >> pat;
        vector<int> res = searchPattern(pat, txt);
        if (res.empty()) {
            cout << "[]" << endl;
        } else {
            for (int i : res) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
