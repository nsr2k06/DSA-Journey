//WAP TO ADD MERGE TWO SORTED ARRAY !

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//METHOD 1 : PUSHING ELEMENTS WHICH IS SMALLER AND USING TWO POINTER APPROACH !
int main(){
    int arr1[]={5,10,15,20,25};
    int n=sizeof(arr1)/sizeof(int);

    int arr2[]={7,14,21,28,35};
    int m=sizeof(arr2)/sizeof(int);

    
    cout<<"Array 1 ";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }    
    cout<<endl;

    cout<<"Array 2 ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }    

    int size=n+m;
    int temp[size]; // Temporary array to hold merged elements
    int i = 0, j = 0, k = 0;
    cout << endl;
    
    //MAIN CODE
     // Merge the two arrays
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            temp[k++] = arr1[i++];
        } else {
            temp[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n) {
        temp[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < m) {
        temp[k++] = arr2[j++];
    }

    cout << "Merged Array: ";
    for (int i = 0; i < size; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}