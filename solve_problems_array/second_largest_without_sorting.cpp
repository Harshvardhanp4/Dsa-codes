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
            cout<<"The second largest element is: "<<result<<endl;

        }
        return 0;
}

//abovee method is a brute force method

//below we will do simple ones and optimal ones

#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& a, int n) {
    int largest = a[0];
    int slargest = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int>& a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest = secondLargest(a, n);
    int sSmallest = secondSmallest(a, n);
    return {sLargest, sSmallest};
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = getSecondOrderElements(n, a);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
