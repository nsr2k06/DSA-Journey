#include <iostream>
using namespace std;

//WAP FOR TWO SUM PROBLEM

int main() {
    int arr[5] = {5, 10, 15, 20, 25};

    cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target;
    cout << "Enter target: ";
    cin >> target;

    //METHOD 1
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found at indices: " << i << " and " << j << endl;
                return 0; // Found a pair, exit successfully
            }
        }
    }

    /*
    METHOD 2
    int i=0;
    int r=n-1;
    while(i<r){
        if(arr[i]+arr[r]>target) r--;
        else if(arr[i]+arr[r]<target) i++;
        else return true;
    return false;
    */
   
    cout << "No pair found." << endl;
    return 0; // Normal exit
}
