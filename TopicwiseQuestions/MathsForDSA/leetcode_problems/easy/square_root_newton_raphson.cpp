#include <iostream>
#include <cmath>
using namespace std;

// LEETCODE - https://leetcode.com/problems/sqrtx/description/ 

int main(){
    double n;
    cout<<"Enter n: ";
    cin>>n;
    double x=n;
    double root;
    while(true){
        root = 0.5*(x+(n/x));
        if(abs(root-x)==0){
            break;
        }
        x=root;
    }
    cout<<"Root: "<<root<<endl;
}