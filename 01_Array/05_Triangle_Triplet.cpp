//WAP FOR ALL POSIBLE TRIANGLE TRIPLET
//TRIANGLE CONDITION : SUM OF TWO SIDE IS GREATER THEN THE THIRD ONE !

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int arr[]={1,2,2,7,12}; //Sorted Array
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"Original Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    //THREE POINTER !
    int ans=0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int k = j + 1;
            while (k < n && arr[i] + arr[j] > arr[k]) {
                ans++;
                k++;
            }
        }
    }
    cout<<endl;
    
    cout << "Total possible triangle triplets: " << ans << endl;

    return 0;
}