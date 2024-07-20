#include <iostream>
using namespace std;
int main() {
    int n,ne,svalue;
    cout << "Enter the size of the array? ";
    cin >> n;
    int arr[n];
    int mid;
    cout << "ENter the number of elements u want to insert(sorting order)? ";
    cin >> ne;
    int beg = 0;
    int end = ne-1;
    for (int i = 0 ; i < ne ; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value u want to search? ";
    cin >> svalue;
    while(end >= beg) {
        mid = (beg+end)/2;
        if (arr[mid] == svalue) {
            cout << mid+1;
            break;
        }
        else if (svalue > arr[mid]) {
            beg = mid+1;
        }
        else {
            end = mid-1;
        }
    }
}