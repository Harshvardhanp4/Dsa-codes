#include<iostream>
using namespace std;

int main(){
    
    cout<<"Enter the no. ";
    int n;
    cin>>n;
    int dup=n;
    int revNum=0;
    while(n>0){
        int ld=n%10;
        revNum=(revNum*10)+ld;
        n=n/10;

}
    if(dup==revNum) cout<<"True this a palindrome";
    else cout<<"False ";
}