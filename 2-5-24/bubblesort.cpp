#include <iostream>
using namespace std;
int main() {
    int n,ne,val;
    cout << "Enter the size of the array? ";
    cin >> n;
    int arr[100];
    cout << "Enter the number of elements u want to insert? ";
    cin >> ne;
    for (int i = 0 ; i < ne ; i++) {
        cin >> arr[i];
    }
    for(int i = n-1 ; i > 0 ; i--) {
        for (int j = 0 ; j <i ; j++) {
            if (arr[j] > arr[j+1]) {
                val = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = val;
            }
        }
    }
    for (int i = 0 ; i < ne ; i++) {
        cout <<  arr[i] << " ";
    }
}