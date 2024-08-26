#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/single-number-ii/description/

int main(){
    cout << "Enter size of array (n): ";
    int n;
    cin >> n;
    cout<<"Enter the elements of the array of size " <<n <<" (it should contain all elements thrice except one element which occurs only 1 time) : " <<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int single=0;
    int count;
    for(int i=0; i<32; i++){
        count=0;
        for(int num: arr){
            if((num&(1<<i))!=0){
                count++;
            }
            
        }
        if(count%3!=0){
            single |= 1<<i;
        }
    }
    cout << "The element occuring only once is: " << single <<endl;
}