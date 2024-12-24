// #include <bits/stdc++.h>
// using namespace std;

// int largestElement(vector<int> &arr, int n) {
//     int largest = arr[0];
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     return largest;
// }

// int main() {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter array elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int result = largestElement(arr, n);
//     cout << "The largest element is: " << result << endl;

//     return 0;
// }

// brute force method

#include<bits/stdc++.h>
using namespace std;
//3,2,1,5,2
 void SortArray(int arr[],int n){
   for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            // Swap elements
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

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
    cout<<"Largest element is: "<<arr[n-1]<<endl;
}