#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// LEETCODE - https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/ 

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int findGCD(const vector<int>& nums) {
    int smallest = nums[0];
    int largest = nums[nums.size() - 1];
    return gcd(smallest, largest);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int result = findGCD(nums);
    cout << "GCD of smallest and largest elements is: " << result << endl;

}
