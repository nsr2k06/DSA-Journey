//WAP TO MOVE NEGATIVE INFRONT AND POSITIVE AT THE END OF THE ARRAY !

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={-1,2,4,-3,6,-8};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"Original Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    //MAIN CODE
    int st=0;
    int end=n-1;
    while(st<=end){
    if(arr[st]<0 && arr[end]<0){ st++;}
    else if (arr[st]>0 && arr[end]<0){swap(arr[st],arr[end]); st++; end--;}
    else if (arr[st]<0 && arr[end]>0){ st++; end--;}
    else if (arr[st]>0 && arr[end>0]){ end--;}
    }
    
    cout<<endl;

    cout<<"Final Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

    return 0;
}