#include <iostream>
#include <vector>

using namespace std;

int findPivot(const vector<int>& nums) {
    int s = 0;
    int e = nums.size() - 1;
    
    while (s < e) {
        int m = s + (e - s) / 2;
        if (nums[m] > nums[e]) {
            s = m + 1;
        } else if (nums[m] < nums[e]) {
            e = m;
        } else {
            e--;
        }
    }
    return s;
}

int binarySearch(const vector<int>& nums, int s, int e, int target) {
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (nums[m] == target) {
            return m;
        } else if (nums[m] < target) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    return -1;
}

int search(const vector<int>& nums, int target) {
    int pivot = findPivot(nums);
    
    int leftResult = binarySearch(nums, 0, pivot - 1, target);
    if (leftResult != -1) {
        return leftResult;
    }
    
    return binarySearch(nums, pivot, nums.size() - 1, target);
}

int main() {
    vector<int> nums = {4, 4, 6, 7, 0, 1, 4};
    int target = 1;

    int result = search(nums, target);
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array" << endl;
    }

    return 0;
}
