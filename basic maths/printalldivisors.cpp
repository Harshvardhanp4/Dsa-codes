
// #include<bits/stdc++.h>
// using namespace std;

// void isDivisor(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the no. ";
//     cin>>n;
//     isDivisor(n);

//     return 0;


// }


//another method to do this code can be in less tc


#include<bits/stdc++.h>
using namespace std;

void isDivisor(int n){
    vector<int>ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
  
    
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls)cout<<it<<" ";
}

int main(){
    int n;
    cout<<"Enter no. ";
    cin>>n;

    isDivisor(n);
    return 0;

}