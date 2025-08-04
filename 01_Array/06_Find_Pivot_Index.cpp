//FIND THE PIVOT INDEX !
//EK AISA INDEX JIDAR SE LEFT AND RIGHT KA SUM EQUAL HO JAY
//[1,7,3,6,6,5] = ANS 3 INDEX 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={1,7,3,6,5,6};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"Original Array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }    
   
    //MAIN CODE
    for(int i=0;i<n;i++){
        int lsum=0,rsum=0;

        for(int j=0;j<i;j++){
            lsum+=arr[j];
        }
        for(int k=n-1;k>i;k--){
            rsum+=arr[k];
        }
        if(lsum==rsum){
            cout<<"INDEX IS :"<<i;
            return 0;  // stop after finding first pivot
        }
    }
    cout<<"NO PIVOT INDEX FOUND";
    return 0;
}
