#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/add-digits/description/ 

// count the number of digits in a num
int digits(int num){
    int count=0;
    if (num==0){
        return 1;
    }
    while(num>0){
        count++;
        num/=10;
    }
    return count;
}

int addDigits(int num) {
    int ans=0;
    while(num>0){
        if(digits(num)==1){
            ans+=num%10;
            num = ans;
            if(digits(ans)==1){
                return ans;
            }
            ans=0;
            continue;
        }
        else{
            ans+=num%10;
            num/=10;
            continue;
        }
    }
    return ans;
}

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    cout<<"Result after recursively summing up its digits is: " <<addDigits(n) <<endl;
}

