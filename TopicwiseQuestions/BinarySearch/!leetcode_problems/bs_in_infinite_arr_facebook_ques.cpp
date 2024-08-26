#include <iostream>
using namespace std;

int bs(int arr[], int t, int s, int e) {
    int result = -1; 
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (arr[m] > t) {
            e = m - 1;
        } else if (arr[m] < t) {
            s = m + 1;
        } else {
            result = m; 
            e = m - 1;  
        }
    }
    return result;
}

int main() {
    int arr[] = {2, 4, 6, 7, 8, 69, 69}; // assumed to be infinite
    int s = 0;
    int e = 1;
    int t = 69;
    while (t > arr[e]) {
        int temp = s;
        e = e + (e - s + 1) * 2;
        s = temp;
    }
    cout << bs(arr, t, s, e) << endl;
}
