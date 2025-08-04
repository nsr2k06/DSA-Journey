//WAP TO SORT 0 1 2 ...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//METHOD 1 : USE SORT FUNCTIONS
//METHOD 2 : USE MAP SET HASHING 
//METHOD 3 : USEING COMPARSION CONDITONALS
int main(){
    int arr[]={1,0,2,0,2,0,1,2,1,0,2,1,0,2,1,0};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"Original Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
     // Pointers for low, mid, and high
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
    cout<<endl;
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}