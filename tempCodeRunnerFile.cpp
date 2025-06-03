#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 7, 3, 55, -87, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int smallest = array[0];
    int largest = array[0];
    for(int i = 1; i < n; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
        if(array[i] > largest) {
            largest = array[i];
        }
    }
    cout << "The smallest element in the array is: " << smallest << endl;
    cout << "The largest element in the array is: " << largest << endl;
  return 0;
}