#include<bits/stdc++.h>
using namespace std;   // 6   538628

void SortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//2 3 5 6 8 8
int secondLargestElement(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            return arr[i];
        }
    }
    return -1;

}

int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        SortArray(arr,n);
        cout<<"Sorted array: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;

        int result=secondLargestElement(arr,n);
        if(result== -1){
            cout<<"No second largest exists! ";
        }
        else{
            cout<<"The second largest element is"<<result<<endl;

        }
        return 0;
}