#include <iostream>
#include <vector>

void swap(std::vector<int>& nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

int missingNumber(std::vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    while (i < n) {
        int correct = nums[i];
        if (nums[i] < n && nums[i] != nums[correct]) {
            swap(nums, i, correct);
        } else {
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] != i) {
            return i;
        }
    }

    return n;
}

int main() {
    std::vector<int> nums = {3, 0, 1};
    int result = missingNumber(nums);
    std::cout << "The missing number is: " << result << std::endl;
    return 0;
}
