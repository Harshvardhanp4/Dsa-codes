#include<bits/stdc++.h>
using namespace std;

void Pattern1(int n){
    for(int i=0;i<n;i++){                                     
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
// Enter how many patterns you want to print: 
// 2
// Enter the no.3 5
// * * * 
// * * * 
// * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
}
void Pattern2(int n){
    for(int i = 0; i<n ;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }   
// Enter how many patterns you want to print: 
// 2
// Enter the no.3 5
// * 
// * * 
// * * * 
// * 
// * * 
// * * *
// * * * *
// * * * * *
}
void Pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
//     Enter how many patterns you want to print: 
// 2
// Enter the no.3 5
// 1 
// 1 2
// 1 2 3
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
}
void Pattern4(int n){


    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }
//     Enter how many patterns you want to print: 
// 2
// // Enter the no.3 5
// // 1
// // 2 2
// // 3 3 3
// // 1
// // 2 2
// // 3 3 3
// // 4 4 4 4
// // 5 5 5 5 5
}
void Pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*"<<" ";

        }
        cout<<endl;

    }
//     Enter how many patterns you want to print: 
// 2
// Enter the no.3 5
// * * *
// * *
// *
// * * * * *
// * * * *
// * * *
// * *
// *
}
void Pattern6(int n){
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i+1;j++){
        cout<<j<<" ";
       }
    cout<<endl;
    }
//     Enter how many patterns you want to print: 
// 2
// Enter the no.3 5
// 1 2 3
// 1 2
// 1
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
}
void Pattern7(int n){
    for(int i=0;i<n;i++){
        //space 
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
        //star
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
        //space
         for(int j=0;j<n-i-1;j++){
            cout<<" ";
    }
    }
}
void Pattern8(int n){
    for(int i=0;i<n;i++){
        //space 
    for(int j=0;j<i;j++){
        cout<<" ";
    }
        //star
    for(int j=0;j<2*n -(2*i+1);j++){
        cout<<"*";
    }
        //space
         for(int j=0;j<i;j++){
            cout<<" ";
    }
    }
}
void Pattern10(int n){
        for(int i=1;i<=2*n-1;i++){
            int stars=i;
            if(i>n)stars=2*n-i;
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
                cout<<endl;
        }
}
void Pattern11(int n){
        int start=1;
        for(int i=0;i<n;i++){
            
            if(i%2==00)start=1;
            else start=0;

            for(int j=0; j<=i;j++){
                cout<<start<<" ";
                start=1-start;
            }
            cout<<endl;
        }
}
void Pattern12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;

        }
        for (int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -=2;
    }
}
void Pattern13(int n){
    int num =1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num;
                num=num+1;
            }
            cout<<endl;
        }
}
void Pattern14(int n){
    for(int i=0;i<n;i++){ 
        //i=2 as per ascii so a+i= a
                                //  b c
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}
void Pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void Pattern16(int n){
    for(int i=0;i<n;i++){
        char ch ='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void Pattern17(int n){
     for(int i=0;i<n;i++){
        //space 
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
        //characters
    char ch='A';
    int breakpoint =(2*i+1)/2;
    for (int j=1; j<=2*i+1;j++){
        cout<<ch;
        if(j<=breakpoint)ch++;
        else ch--;
    }
    
        //space
         for(int j=0; j<n-i-1;j++){
            cout<<" ";
    }
    cout<<endl;
    }
}
void Pattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void Pattern19(int n){

    int iniS=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //stars
         for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;

    }
    iniS=8;
    for (int i=1;i<=n;i++){
         //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //stars
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }
}
void Pattern20(int n){

}
void Pattern21(int n){
    
    
}
int main()
{

    int t;
    cout<<"Enter how many patterns you want to print: "<<endl;
    cin>>t;
    cout<<"Enter the no.";

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        Pattern19(n);
        
    }
}

