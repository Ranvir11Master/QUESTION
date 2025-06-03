#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 7, 3, 55, -87, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int smallest = array[0], largest = array[0];
    int smallIndex = 0, largeIndex = 0;
    for(int i = 1; i < n; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
            smallIndex = i;

        } else if(array[i] > largest) {
            largest = array[i];
            largeIndex = i;
        }
    }
    cout << "The smallest element in the array is: " << smallest << endl;
    cout << "The largest element in the array is: " << largest << endl;
    cout << "Index of the smallest element: " << smallIndex << endl;
    cout << "Index of the largest element: " << largeIndex << endl; 
  return 0;
}