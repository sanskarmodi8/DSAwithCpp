#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/missing-number/

int main(){
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout<<"Enter the elements of the array of size " <<n <<": " <<endl;
    int arr[n];
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    int arr_sum = 0;
    for(int i=0; i<n-1; i++){
        arr_sum += arr[i];
    }
    int ans = n*(n+1)/2 - arr_sum;
    cout<<"Missing number in the array is: " <<ans <<endl;
}