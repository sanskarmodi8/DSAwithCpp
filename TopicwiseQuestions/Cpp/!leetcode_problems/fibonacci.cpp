#include <iostream>
using namespace std;

// GET THE NTH ELEMENT OF FIBONACCI SEQUENCE

// USING FOR LOOP
int main(){
    cout<<"Enter n: ";
    int n;
    cin>>n;

    int a = 0, b=1, c=1;

    if (n==1){
        cout <<n <<"th number in Fibonacci sequence is " <<a <<endl;
    }
    else if (n==2){
        cout <<n <<"th number in Fibonacci sequence is " <<b <<endl;
    }
    else{
        for(int i = 3; i<n+1; i++){
            c = a+b;
            a = b;
            b = c;
        }
        cout <<n <<"th number in Fibonacci sequence is " <<c <<endl;
    }
}