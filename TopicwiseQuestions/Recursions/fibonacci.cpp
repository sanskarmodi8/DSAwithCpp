#include <iostream>
#include <cmath>
using namespace std;

// GET THE NTH ELEMENT OF FIBONACCI SEQUENCE USING BINET'S FORMULA

int main() {
    cout << "Enter n: ";
    int n;
    cin >> n;

    double sqrt_5 = sqrt(5);
    double phi = (1 + sqrt_5) / 2;
    double psi = (1 - sqrt_5) / 2;

    int ans = round((pow(phi, n) - pow(psi, n)) / sqrt_5);

    cout << n << "th number in Fibonacci sequence is " << ans << endl;
}
