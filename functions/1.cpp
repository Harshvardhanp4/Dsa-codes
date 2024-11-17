#include<bits/stdc++.h>
using namespace std;

//functions are set of codes which performs something for yoy
//functions are used to modularize the code
//functions are used to increase readabiltiy 
//functions are used to use same code multiple times
//void,return,parameterized,non parameterized
//void-> which doesnt return anything

// void printName(string name){
//     cout<<"HEY "<<name<<endl;
// }
// int main()
// {
//     string name;
//     cin>>name;
//     printName(name);
   

//     string name2;
//     cin>>name2;
//     printName(name2);
//      return 0;
// }
// int sum(int num1, int num2){
//     int num3= num1+num2;
//     return num3;

// }
// int main(){
    
//     int num1, num2;
//     cin>> num1>> num2;
//     int result =sum(num1,num2);
//     cout<<result;
//     return 0;



// }
// int maxx (int num1, int num2){
//     if(num1>=num2)return num1;
//     else return num2;
    
// }


// int main(){
//     int num1, num2;
//     cin>> num1 >> num2;
//     int maximum = maxx(num1,num2);
//     cout<<maximum;
//     return 0;

// }

//pass by value
// void doSomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;

// }
// int main(){

//     int num =10;
//     doSomething(num);

//     return 0;
// }

// void doSomething(string s){
//     s[0]='t';
//     cout<<s<<endl;

// }
// int main(){
//     string s ="Harsh";
//     doSomething(s);
//     cout<<s<<endl;
//     return 0;
// }

//pass by reference
 void doSomething(string &s){
    s[0]='t';
    cout<<s<<endl;

}
int main(){
    string s ="Harsh";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}
