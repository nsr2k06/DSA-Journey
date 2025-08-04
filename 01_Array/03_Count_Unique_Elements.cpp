#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main() {
    int arr[5] = {1,1,2,2,5}; // Already sorted in this example
    int n = 5;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Make sure array is sorted if not guaranteed
    sort(arr, arr + n);

    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1]; // Add the last unique element

    cout << "No. of Unique Elements: " << j << endl;

    cout << "Array with unique elements: ";
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
