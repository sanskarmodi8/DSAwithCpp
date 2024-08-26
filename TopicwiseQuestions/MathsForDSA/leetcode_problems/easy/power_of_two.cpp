#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/power-of-two/description/ 

int main(){
    cout<<"Enter n: ";
    int n;
    cin>>n;
    if (n<1){
        cout<< 0 <<endl;
    } else{
        cout<< ((n&(n-1)) ==0) <<endl;
    }
}