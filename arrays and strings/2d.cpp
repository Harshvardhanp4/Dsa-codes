#include<bits/stdc++.h>
using namespace std;
int main()
{
    //2d
    int arr[3][5];
/*
    0 [0 1 2 3 4]
    1 [0 1 2 3(78) 4]
    2 [0 1 2 3 4]
*/
    arr[1][3] = 78;
    cout<<arr[1][2];
}