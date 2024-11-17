#include<bits/stdc++.h>
using namespace std;

void pattern5(int n){
    for(int i=1;i<=n;i++){
       for(int j=0;j<n-i+1;j++){
        cout<<"*"<<" ";
       }
    cout<<endl;
    }
}

int main(){

        int t;
        cout<<"Enter how many patterns you want: "<<endl;
        cin>>t;
        cout<<"Enter the no.s of patterns "<<endl;
        for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern5(n);
}
}