#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout<<"*";
            
        }
        cout<<endl;
        
    }
}

int main(){
    int t;
    cout<<"Enter how many times you have to print the pattern: ";
    cin>>t;
    cout<<"Enter the no. "<<endl;
    for(int i=0;i<t;i++){
    int n;
    
    cin>>n;
    
    pattern1(n);
        
    }
}


