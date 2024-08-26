#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int n;
    cin >> n;
    
    int ans;

    if(n==0){
        ans=0;
    } else{
        ans = log2(n&-n) + 1;
    }
    
    cout << "Position of the right most set bit (from right) is: " << ans << endl;
}
