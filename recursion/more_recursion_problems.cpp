
//sum of n no.s,//factorial

#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);

}



int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;

    cout<<fact(n);
}



