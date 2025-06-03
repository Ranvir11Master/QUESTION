#include <iostream>
using namespace std;

// Function to check if a number is a power of 2 using loop
bool isPowerOfTwo(int n) {
    if(n <= 0) return false;
    while(n > 1) {
        if(n % 2 != 0) return false; // If n is odd, it can't be a power of 2
        n /= 2; // Divide n by 2
    }
    return true; // If we reach 1, it is a power of 2

}

int main() {
    int num;
    cout << "Enter a num: ";
    cin >> num;
    if(isPowerOfTwo(num)) {
        cout << num << " it is a power of 2" << endl;
    } else {
        cout << num << " it is a power of 2" << endl;
    }
    return 0;
}