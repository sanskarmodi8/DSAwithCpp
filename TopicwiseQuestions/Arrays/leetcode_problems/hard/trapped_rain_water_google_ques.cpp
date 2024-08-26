#include <iostream>
#include <vector>
using namespace std;

// LEETCODE - https://leetcode.com/problems/trapping-rain-water/

int trap(const vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int leftmax = height[left];
    int rightmax = height[right];
    int water_trapped = 0;

    while (left <= right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftmax) {
                leftmax = height[left];
            } else {
                water_trapped += leftmax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightmax) {
                rightmax = height[right];
            } else {
                water_trapped += rightmax - height[right];
            }
            right--;
        }
    }

    return water_trapped;
}

int main() {
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int result = trap(heights);
    cout << "Trapped water: " << result << endl;
    return 0;
}
