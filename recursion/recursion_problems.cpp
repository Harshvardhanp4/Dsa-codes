//basic recursion problems.

//print name n no.of times
// #include<bits/stdc++.h>
// using namespace std;

// void name(int i,int n){
//     if(i>n){
//         return;//base case
//     }
//     cout<<"Harsh"<<endl;
//     name(i+1,n);

// }

// int main(){
//     int n;
//     cout<<"Enter no. of times you want your name to be printed: ";
//     cin>>n;
//     name(1,n);
// }

//print 1 to n
// #include<bits/stdc++.h>
// using namespace std;

// void number(int i,int n){
//     if(i>n){
//         return;//base case
//     }
//     cout<<i<<endl;
//     number(i+1,n);

// }

// int main(){
//     int n;
//     cout<<"Enter till which no. you want to print:i.e:-1-5,1-10 enter 5 or 10 ";
//     cin>>n;
//     number(1,n);
// }

//print n to 1

// #include<bits/stdc++.h>
// using namespace std;

// void name(int i,int n){
//     if(i<1){
//         return;//base case
//     }
//     cout<<i<<endl;
//     name(i-1,n);

// }

// int main(){
//     int n;
//     cout<<"Enter from where you want to be printed ";
//     cin>>n;
//     name(n,n);
// }

//print from 1 to n use backtrack (i.e:- not + use -)

#include<bits/stdc++.h>
using namespace std;

void name(int i,int n){
    if(i<1){
        return;//base case
    }
    name(i-1,n);
    cout<<i<<endl;
    

}

int main(){
    int n;
    cout<<"Enter from where you want to be printed ";
    cin>>n;
    name(n,n);
}
