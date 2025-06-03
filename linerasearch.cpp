#include <iostream>
using namespace std;

// Linear search to Find num
int linearSearch(int arr[], int n, int num) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
 return -1; // If the number is not found, return -1
}

int main() {
    int arr[] = {10, 7, 3, 55, -87, 1};
    cout << linearSearch(arr, sizeof(arr) / sizeof(arr[0]), 55) << endl; // Output: 3


  return 0;
}