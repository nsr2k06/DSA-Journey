//WAP FOR WAVE ARRAY 
// a1>= a2 <=a3 >= a4 <=a5>=...
// 5 3 6 3 5 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//METHOD 1 : MAXIMUM MINIMUM -- HILL VALLY CONCEPT
//LEXICOGRAPHYICALY :  1 2 3 == 3! = 6 POSSIBLE COMBINATIONS 
//PAIRWISE SWAPPING !

int main(){
    int arr[]={5,10,15,20,25}; //SORTED
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"Original Array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }    

    //MAIN CODE
    for(int i=0;i<n;i++){
        swap(arr[i],arr[i+1]);
    }

    cout<<endl;
    
    cout<<"Final Array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}