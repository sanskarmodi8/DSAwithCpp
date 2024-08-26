#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/factorial-trailing-zeroes/ 

int fact_trail_zeroes(int n){
    int count = 0;
    while(n>=5){
        count += n/5;
        n /= 5;
    }

    return count;
}

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    cout<< "Number of trailing zeroes in the factorial of " <<n <<" is - " <<fact_trail_zeroes(n) <<endl;
}