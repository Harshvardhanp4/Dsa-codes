#include<bits/stdc++.h>
using namespace std;

int cnt = 0;


void f(int cnt) {
    cout << cnt << " ";  
    cnt++;               
    if (cnt < 10)         
        f(cnt);         
}

int main() {
f(cnt);     
    return 0;   
    }

// #include<bits/stdc++.h>
// using namespace std;

// int cnt = 0;

// void f(int cnt) {
//     if (cnt == 4) {
//         return;
//     } else {
//         cout << cnt << " ";
//         cnt++;
//         f(cnt);
//     }
// }

// int main() {
//     f(cnt);
//     return 0;
// }
