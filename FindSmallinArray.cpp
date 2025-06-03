#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10,7,3,55,-87,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i = 0;
    for(i; i < n; i++) { // we have min And max
        // if(arr[i] < smallest) {
        //     smallest = arr[i];
        // }
        smallest = min(arr[i], smallest); // Using the min function to find the smallest element
        largest = max(arr[i], largest); // Using the max function to find the largest element
    }
    cout << "The smallest element in the array is: " << smallest << endl;
    cout << "The largest element in the array is: " << largest << endl;

  return 0;
}