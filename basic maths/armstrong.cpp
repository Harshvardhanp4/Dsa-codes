#include<bits/stdc++.h>
using namespace std;


bool isArmstrong(int n){
    int dup=n;
    int sum=0;

    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;

    }
    if(sum==dup){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;

    if(isArmstrong(n)){
        cout<<n<<" is an armstrong number "<<endl;

    }
    else{
        cout<<n<<" is not an Armstrong number"<<endl;

        return 0;
    }
}

//for looping we can write in place of else

/*

while(!is Armstrong(n)){
cout<<n<<" is not an armstrong number pls try again!"
cin>>n;
}

cout<<n<<"is an armstrong number!"<<endl;


*/