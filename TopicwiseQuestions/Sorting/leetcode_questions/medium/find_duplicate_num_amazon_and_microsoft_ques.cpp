#include <iostream>
#include <vector>

void swap(std::vector<int>& nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

int findDuplicate(std::vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    
    while (i < n) {
        int correct = nums[i] - 1;
        if (nums[i] != nums[correct]) {
            swap(nums, i, correct);
        } else {
            i++;
        }
    }
    
    return nums[n - 1];
}

int main() {
    std::vector<int> nums = {3, 1, 3, 4, 2};
    int duplicate = findDuplicate(nums);
    
    std::cout << "The duplicate number is: " << duplicate << std::endl;
    
    return 0;
}
