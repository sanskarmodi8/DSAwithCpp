#include <iostream>
using namespace std;

int main(){
    cout<<"Enter i: ";
    int i;
    cin>>i;
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int mask = 1<<(i-1);
    int ans = n&mask;
    if(ans!=0){
        ans=1;
    } else{
        ans=0;
    }
    cout<<i <<"th bit of the number " <<n <<" is: " <<ans <<endl;
}