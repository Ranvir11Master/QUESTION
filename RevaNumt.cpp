#include <iostream>
using namespace std;

// Function for Reversing a number
int reverseNumber(int n) {
    int reverse = 0;
    while(n > 0) {
        reverse = reverse * 10 + n % 10; // Get the last digit and add it to the reverse
        n /= 10; // Remove the last digit from n
    }
    return reverse; // Return the reversed number
}



int main() {
    cout<< reverseNumber(1234567890) << endl;
    
}