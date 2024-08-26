#include <iostream>
#include <vector>

void swap(std::vector<int>& nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

int firstMissingPositive(std::vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    
    while (i < n) {
        if (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]) {
            swap(nums, i, nums[i] - 1);
        } else {
            i++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    
    return n + 1;
}

int main() {
    std::vector<int> nums = {3, 4, -1, 1};
    int missingPositive = firstMissingPositive(nums);
    
    std::cout << "The first missing positive number is: " << missingPositive << std::endl;
    
    return 0;
}
