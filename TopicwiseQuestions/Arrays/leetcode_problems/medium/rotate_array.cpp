#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/rotate-array/

int main(){
    int k = 54944;
    int nums[] = {1,2,3,4,5};
    int length = sizeof(nums)/sizeof(nums[0]);
    cout<<length<<endl;
    while(k>length){
        k %= length;
    }
    for (int m = 0; m < k; m++) {
        int temp = nums[length - 1];  
        for (int i = length - 1; i > 0; i--) {
            nums[i] = nums[i - 1]; 
        }
        nums[0] = temp; 
    }
    for(int n=0; n<length; n++){
        cout<<nums[n] <<" ";
    }
    cout<<endl;
}