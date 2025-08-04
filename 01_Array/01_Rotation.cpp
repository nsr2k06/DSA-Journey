//WAP TO ROTATE THE ARRAY BY LEFT OR RIGHT 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//METHOD 1 LEFT ROTATE BY 2
void rotateleft(int ar[],int size,int rotate){
    rotate=rotate%size;
    while(rotate--){
        int temp=ar[0];
        for(int i=0;i<size;i++){
            ar[i]=ar[i+1];
            ar[size-1]=temp;
        }

    }

}
int main(){
    int arr[5]={5,10,15,20,25};

    cout<<"Original Array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    rotateleft(arr,5,3);
    
    cout<<"Final Array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  
    return 0;
}