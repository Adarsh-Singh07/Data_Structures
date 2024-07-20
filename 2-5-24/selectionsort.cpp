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
    for (int i = 0 ; i < ne ; i++) {
        int min = i;
        for (int j = i+1 ; j < ne ; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min!=i) {
        int v = arr[i];
        arr[i] = arr[min];
        arr[min] = v;
        }
    }
    for (int i = 0 ; i < ne ; i++) {
        cout <<  arr[i] << " ";
    }
}