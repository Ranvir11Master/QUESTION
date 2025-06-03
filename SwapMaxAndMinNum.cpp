#include <iostream>
using namespace std;

// Function to swap the maximum and minimum elements in an array
void swapMaxAnddMinNum(int arr[], int sz) {
    if (sz <= 0) return; //Check for empty Array
    int maxIndex = 0, minIndex = 0;
    for(int i =0; i < sz; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i; //Upadate maxIndex if Current element is greater
        } else if(arr[i] < arr[minIndex]) {
            minIndex = i; //Update minIndex if Current element is smaller
        }
    }

    // Swap the maximum and minimum elements
    if(maxIndex != minIndex) {
        swap(arr[maxIndex], arr[minIndex]);
        
        for(int i = 0; i < sz; i++) {
            cout << arr[i] << " "; // Print the array after swapping
        }
        cout << endl;
    }

}

int main() {
    int arr[5] = {-1,4,3,9,111};
    int sz = 5;
    cout << "Array Before Swapping Max Ans Min Elements: ";
    for(int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array After Swapping Max And Min Elements: ";
    swapMaxAnddMinNum(arr, sz);

  return 0;
}
