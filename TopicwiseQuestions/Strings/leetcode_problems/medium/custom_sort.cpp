#include <iostream>
#include <string>
using namespace std;

string customSortString(string order, string s) {
    int count[26] = {0};    
    int inorder[26] = {0};   
    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < order.size(); i++) {
        for (int j = count[order[i] - 'a']; j > 0; j--) {
            ans += order[i];
        }
    }
    for (int i = 0; i < order.size(); i++) {
        inorder[order[i] - 'a'] = 1;
    }
    for (int i = 0; i < s.size(); i++) {
        if (inorder[s[i] - 'a'] == 0) {
            ans += s[i];
        }
    }
    return ans;
}

int main() {
    string order = "cba";
    string s = "abcd";
    string sortedString = customSortString(order, s);
    cout << "Custom sorted string: " << sortedString << endl;

    return 0;
}
