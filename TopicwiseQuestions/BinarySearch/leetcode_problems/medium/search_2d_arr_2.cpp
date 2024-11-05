#include <iostream>
#include <vector>
using namespace std;

// LEETCODE - https://leetcode.com/problems/search-a-2d-matrix-ii/

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0;
    int j = n - 1;
    
    // Start search from top-right corner
    while (i < m && j >= 0) {
        if (matrix[i][j] == target) {
            return true;
        } else if (matrix[i][j] > target) {
            j--;  // Move left
        } else {
            i++;  // Move down
        }
    }
    return false;
}

int main() {
    // Example matrix and target
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };
    
    int target = 5;

    // Call the function and print the result
    if (searchMatrix(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
