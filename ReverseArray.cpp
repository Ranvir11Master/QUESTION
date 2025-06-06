#include <iostream>
using namespace std;

// Reverse an array
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n-1;
    while(start < end) {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}



int main() {
    int arr[] = {10, 20, 30 ,40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, n);
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }   cout << endl;


  return 0;
}