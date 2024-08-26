#include <iostream>
#include <vector>
#include <algorithm>

// LEETCODE - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int s = 0;
    int e = nums.size() - 1;
    std::sort(nums.begin(), nums.end());
    std::vector<int> ans = {-1, -1};
    
    while (s < e) {
        int sum = nums[s] + nums[e];
        if (sum > target) {
            e--;
        } else if (sum < target) {
            s++;
        } else {
            ans[0] = s + 1;
            ans[1] = e + 1;
            break;
        }
    }
    return ans;
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = twoSum(nums, target);
    
    std::cout << "[" << nums[result[0]-1] << ", " << nums[result[1]-1] << "]" << std::endl;
    
    return 0;
}

