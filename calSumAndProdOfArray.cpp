#include <iostream>
using namespace std;

//Funtion to calculate sum and product of an array
void calSumAndProbOfArray(int arr[], int sz) {
    int sum = 0;
    int prod = 1;

    for(int i = 0; i < sz; i++) {
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "Product: " << prod << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);

    calSumAndProbOfArray(arr, sz);
 

  return 0;
}