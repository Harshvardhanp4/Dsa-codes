#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    leftRotateByOne(arr, n);

    cout << "Array after left rotation by one: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

/// vector 

#include <iostream>
#include <vector>
using namespace std;

void leftRotateByOne(vector<int>& vec) {
    if (vec.empty()) return;

    int first = vec[0];
    for (int i = 0; i < vec.size() - 1; ++i) {
        vec[i] = vec[i + 1];
    }
    vec[vec.size() - 1] = first;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    leftRotateByOne(vec);

    cout << "Vector after left rotation by one: ";
    for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}
// changes 
#include

