//1,2,2,3,3,4//
//1,2,1,3,4//


#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
        
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                return false;
            }
        }        
        return true;
 }


int main(){
    int n;
    cout<<"Enter the array size ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    if(isSorted(arr,n)){
        cout<<"The array is  sorted. "<<endl;
    }
    else{
        cout<<"The array is not  sorted!"<<endl;

    }

     return 0;

}