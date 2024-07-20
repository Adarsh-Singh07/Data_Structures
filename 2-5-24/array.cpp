#include <iostream>
using namespace std;
int main() {
    int n,op,ne,index,svalue;
    cout << "Enter the size of the array? ";
    cin >> n;
    int arr[n];
    cout << "ENter the number of elements u want to insert? ";
    cin >> ne;
    for (int i = 0 ; i < ne ; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number corresponding to the operation"<< endl;
    cout << "1. Insertion"<< endl<<"2. Deletion" << endl << "3. Printing" << endl << "4. Searching"<< endl;
    cin >> op;
    switch (op) {
        case 1:
        cout << "Enter the index in which u want to insert? ";
        cin >> index;
        if (n == ne) {
            cout << "insertion not possible";
        }
        else {
            cout << "Enter the value u want to insert? ";
            cin >> svalue;
            for (int i = ne-1 ; i >=index ; i-- ) {
                arr[i+1] = arr[i];
            }
            arr[index] = svalue;
            ne++;
            for (int i = 0 ; i < ne ; i++) {
            cout << arr[i] << endl;
        }
        }
        break;

        case 2:
        cout << "Enter the index u want to delete? ";
        cin >> index;
        if (index > ne) {
            cout << "Deletion not possible";
        }
        else {
            for (int i = index ; i<=ne ; i++) {
                arr[i] = arr[i+1];
            }
            ne--;
            for (int i = 0 ; i < ne ; i++) {
            cout << arr[i] << endl;
        }
        }
        break;

        case 3:
        for (int i = 0 ; i < ne ; i++) {
            cout << arr[i] << endl;
        }
        break;

        case 4:
        cout << "Enter the value u want to search? ";
        cin >> svalue;
        for (int i = 0 ; i < ne ; i++) {
            if (arr[i] == svalue) {
                cout << i;
                break;
            }
        }
    }
}