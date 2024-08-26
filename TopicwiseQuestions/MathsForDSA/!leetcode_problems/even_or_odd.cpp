#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    if((n&1)==1){
        cout<<"The provided number is odd"<<endl;
    } else{
        cout<<"The provided number is even"<<endl;
    }
}