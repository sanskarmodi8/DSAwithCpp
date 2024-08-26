#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool canSplit(const std::vector<int>& nums, int k, int max_sum) {
    int current_sum = 0;
    int required_subarrays = 1;

    for (int num : nums) {
        if (current_sum + num > max_sum) {
            required_subarrays++;
            current_sum = num;
            if (required_subarrays > k) {
                return false;
            }
        } else {
            current_sum += num;
        }
    }

    return true;
}

int splitArray(const std::vector<int>& nums, int k) {
    int left = *std::max_element(nums.begin(), nums.end());
    int right = std::accumulate(nums.begin(), nums.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (canSplit(nums, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    std::vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    int result = splitArray(nums, k);
    std::cout << "The minimized largest sum of the split is: " << result << std::endl;

    return 0;
}
