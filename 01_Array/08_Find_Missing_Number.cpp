//FIND THE MISSING NUMBER IN THE ARRAY !

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//METHOD 1 : SUMMATION FORMULA

int main(){
    int arr[]={0,1,2,3,5,6}; //sorted
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"Original Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;

    //MAIN CODE
    int sum=n*(n+1)/2;
    int arrsum=0;
    for(int i=0;i<n;i++){
        arrsum+=arr[i];
    }
    cout<<"Missing Number is : "<<sum-arrsum;

    return 0;
}