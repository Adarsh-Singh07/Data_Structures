#include <iostream>
using namespace std;
int main() {
    int n,ne,variable;
    cout << "Enter the size of the array? ";
    cin >> n;
    int arr[n];
    int temp=0;
    cout << "ENter the number of elements u want to insert? ";
    cin >> ne;
    for (int i = 0 ; i < ne ; i++) {
        cin >> arr[i];
    }
    
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "After sorting";
    for (int i = 0 ; i < ne ; i++) {
        cout << arr[i] << endl;
    }
}