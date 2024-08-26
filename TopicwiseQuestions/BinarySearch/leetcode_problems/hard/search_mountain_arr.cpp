#include <iostream>
#include <vector>

int peak(const std::vector<int> &arr) {
    int s = 0;
    int e = arr.size() - 1;
    while (s < e) {
        int m = s + (e - s) / 2;
        if (arr[m] < arr[m + 1]) {
            s = m + 1;
        } else {
            e = m;
        }
    }
    return s; 
}

int bs(const std::vector<int> &arr, int s, int e, int target) {
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (arr[m] == target) {
            return m;
        } else if (arr[m] < target) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    return -1;
}

int order_agnostic_bs(const std::vector<int> &arr, int s, int e, int target) {
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (arr[m] == target) {
            return m;
        } else if (arr[m] > target) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    return -1;
}

int findInMountainArray(int target, const std::vector<int> &arr) {
    int peakIndex = peak(arr);
    
    int leftResult = bs(arr, 0, peakIndex, target);
    if (leftResult != -1) {
        return leftResult;
    }

    return order_agnostic_bs(arr, peakIndex + 1, arr.size() - 1, target);
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 6, 4, 2};
    int target = 6;
    int result = findInMountainArray(target, arr);
    if (result != -1) {
        std::cout << "Target " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Target " << target << " not found" << std::endl;
    }
    return 0;
}
