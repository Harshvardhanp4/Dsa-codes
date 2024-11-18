// //digit concept

// #include<bits/stdc++.h>
// using namespace std;

//     int count(int n){
//         int cnt=0;
//         while(n>0){
//             int lastDigit =n%10;
//             cnt=cnt+1;
//             n=n/10;
//         }
//         return cnt;
//     }
// //or we can do it like this too
// /*  int count (int n){
// int cnt= (int)log10(n)+1;
// return cnt;
// }
// */

// int main(){
//         int n;
//         cout<<"Enter the no. ";
//         cin>>n;
//         cout<<"No. of digits printed are:"<<count(n);
//         return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int count(int n){

    int cnt=0;
    while(n>0){
        int lastDigit=n%10;
        cnt=cnt+1;
        n=n/10;
    }
}

int main(){

}