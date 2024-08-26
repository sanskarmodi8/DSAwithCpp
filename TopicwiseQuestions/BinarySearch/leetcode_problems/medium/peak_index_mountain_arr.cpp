#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/1356477922/

int main(){
    int arr[] = {7,10,5,2,1,1,0};
    int s = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int e = size-1;
    while(s<e){
        int m = s+(e-s)/2;
        if(arr[m]<arr[m+1]){
            s=m+1;
        } else{
            e=m;
        }
    }
    cout<<s<<endl;
}