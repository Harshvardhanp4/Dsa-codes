// //1,2,2,3,3,4//
// //1,2,1,3,4//


// #include<bits/stdc++.h>
// using namespace std;

// bool isSorted(int arr[],int n){
        
//         for(int i=0;i<n-1;i++){
//             if(arr[i]>arr[i+1]){
//                 return false;
//             }
//         }        
//         return true;
//  }


// int main(){
//     int n;
//     cout<<"Enter the array size ";
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }

//     if(isSorted(arr,n)){
//         cout<<"The array is  sorted. "<<endl;
//     }
//     else{
//         cout<<"The array is not sorted!"<<endl;

//     }

//      return 0;

// }

//with vectors.
#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    for(int i = 1; i < n; i++) {
        if(a[i] <= a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout<<"Enter the size ";
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(isSorted(n, a)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}





