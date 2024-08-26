#include <iostream>
#include <climits>
using namespace std;

// LEETCODE - https://leetcode.com/problems/reverse-integer/description/ 


int reverse(int x) {
    int reversed = 0;
    while (x != 0) {
        int pop = x % 10; // Get the last digit
        x /= 10; // Remove the last digit from x
        
        // Check for positive overflow
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && pop > 7)) {
            return 0;
        }
        
        // Check for negative overflow
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && pop < -8)) {
            return 0;
        }
        
        reversed = reversed * 10 + pop; // Append the digit
    }
    return reversed;
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    int result = reverse(n);
    cout << "The reversed number is: " << result << endl;
    return 0;
}