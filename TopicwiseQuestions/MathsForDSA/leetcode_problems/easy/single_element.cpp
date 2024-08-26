#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/single-number/description/ 

int main(){
    cout << "Enter size of array (n): ";
    int n;
    cin >> n;
    cout<<"Enter the elements of the array of size " <<n <<" (it should contain all elements twice except one element which occurs only 1 time) : " <<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int length = sizeof(arr)/sizeof(arr[0]);
    int single=0;
    for(int i=0; i<length; i++){
        single ^= arr[i];
    }
    cout << "The element occuring only once is: " << single <<endl;
}