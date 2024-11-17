#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // below 25 f 
    // 25-44 e
    // 45- 49 d
    // 50-59 c
    // 60-79 b
    // 80-100 a

    // ask user to enter marks and print the corresponding grade.


    // int marks;
    // cout<<"Enter your marks: "<<endl;
    // cin>>marks;

    // if(marks<25){
    //     cout<<"Your grade is F ";
  
    // }
    // else if (marks <= 44){
    //     cout<<"Your grade is E ";

    // }

    // else if( marks <= 49){
    //     cout<<"Your grade is D ";

    // }

    // else if( marks <= 59){
    //     cout<<"Your grade is C ";

    // }

    // else if( marks <= 79){
    //     cout<<"Your grade is B ";

    // }

    // else if( marks <= 100){
    //     cout<<"Your grade is A ";

    // }



    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age<18){
        cout<<"Youre not eligible for job! ";

    }
    
    else if(age<=57){
        cout<<"Eligible for job! ";
        if(age>=55){
            cout<<"Retirement soon!";
        }
    }

    else {
        cout<<"Retirement time! sorry";
    }
}