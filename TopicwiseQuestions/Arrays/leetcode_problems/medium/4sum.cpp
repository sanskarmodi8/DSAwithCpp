#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 0, -1, 0, -2, 2};  // Example input
    int target = 0;
    
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());

    int n = nums.size();
    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            
            int left = j + 1;
            int right = n - 1;
            long long current_target = static_cast<long long>(target) - nums[i] - nums[j];
            
            while (left < right) {
                long long sum = static_cast<long long>(nums[left]) + nums[right];
                if (sum == current_target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    ++left;
                    --right;
                } else if (sum < current_target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
    }

    for (const auto& quad : result) {
        for (int num : quad) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
