#include <iostream>
#include <vector>

void swap(std::vector<int>& nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    std::vector<int> ans;
    
    while (i < n) {
        int correct = nums[i] - 1;
        if (nums[i] != nums[correct]) {
            swap(nums, i, correct);
        } else {
            i++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (nums[i] - 1 != i) {
            ans.push_back(i + 1);
        }
    }
    
    return ans;
}

int main() {
    std::vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    std::vector<int> result = findDisappearedNumbers(nums);
    
    std::cout << "Disappeared numbers: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout<<std::endl;
    return 0;
}
