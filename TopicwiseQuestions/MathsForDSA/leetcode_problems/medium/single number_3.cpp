#include <iostream>
using namespace std;

int main() {
    cout << "Enter size of array (n): ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array of size " << n << " (it should contain all elements twice except two elements which occur only once): " << endl;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int xorAll = 0;

    for(int i = 0; i < n; i++) {
        xorAll ^= arr[i];
    }

    unsigned int setBit = xorAll & -(unsigned int)xorAll; 

    int num1 = 0, num2 = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] & setBit) {
            num1 ^= arr[i];  
        } else {
            num2 ^= arr[i];
        }
    }

    cout << "The two elements occurring only once are: " << num1 << " and " << num2 << endl;

    return 0;
}
