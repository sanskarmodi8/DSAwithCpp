#include <iostream>
#include <vector>
using namespace std;

// LEETCODE - https://leetcode.com/problems/search-a-2d-matrix/description/

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix[0].size();
    int m = matrix.size();
    int s = 0;
    int e = m * n - 1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int midi = mid / n;  // Row index
        int midj = mid % n;  // Column index

        if (matrix[midi][midj] == target) {
            return true;
        } else if (matrix[midi][midj] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return false;
}

int main() {
    // Example matrix and target
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    
    int target = 3;

    // Call the function and print the result
    if (searchMatrix(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
