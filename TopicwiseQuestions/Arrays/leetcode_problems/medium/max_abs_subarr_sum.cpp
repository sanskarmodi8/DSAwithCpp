#include <iostream>
#include <vector>
#include <algorithm>

// LEETCODE - https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/

int maxAbsoluteSum(const std::vector<int>& nums) {
    int max_sum = 0;
    int min_sum = 0;
    int current_max = 0;
    int current_min = 0;

    for (int num : nums) {
        current_max = std::max(num, current_max + num);
        max_sum = std::max(max_sum, current_max);
        
        current_min = std::min(num, current_min + num);
        min_sum = std::min(min_sum, current_min);
    }

    return std::max(max_sum, -min_sum);
}

int main() {
    std::vector<int> nums = {1, -2, 3, -4, 5}; // Example array

    int result = maxAbsoluteSum(nums);
    std::cout << "The maximum absolute sum of any subarray is: " << result << std::endl;

    return 0;
}
