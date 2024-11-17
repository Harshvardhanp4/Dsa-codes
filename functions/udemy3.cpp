#include<bits/stdc++.h>
using namespace std;

void pass_by_value1(int num1);
void pass_by_value2(string s);
void pass_by_value3(vector<string>v);
void pass_by_value4(vector<string>v);

void pass_by_value1(int num){
    num=1000;
}
void pass_by_value2(string s){
    s="Changed";
}
void pass_by_value3(vector<string>v){
    v.clear();

}
void print_vector(vector<string>v){
    for(auto s:v)
    cout<<s<<" ";
    cout<<endl;

}

int main()
{
    int num{10};
    int another_num{20};

    cout<<"num before calling pass_by_value1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"num after calling pass_by_value1:"<<num<<endl;

    cout<<"another num before calling pass by value 1: "<<another_num<<endl;
    pass_by_value1(another_num);
    cout<<"another num after calling pass by value 1: "<<another_num<<endl;
}