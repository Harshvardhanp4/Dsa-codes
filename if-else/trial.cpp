/* internship recruitmenet process 

user enters cgpa
cgpa < 5 = no
cgpa >5 = simple intern
cpa > 6 = good intern
cgpa >8 = best
cgpa 10 & 9 = recruited

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Welcome to internship recruitment process! "<<endl;
    cout<<"Enter your cgpa= ";
    double cgpa;
    cin>>cgpa;

    if(cgpa<5){
        cout<<"Not eligible sry!";

    }
    else if (cgpa<=6){
        cout<<"Simple intern! ";

    }
    else if (cgpa<9){
        cout<<"Best intern!";

    }
    else {
        cout<<"Youre recruited!";
    }
}
