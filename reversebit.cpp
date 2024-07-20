#include <iostream>
using namespace std;
long reverseBits(long n) {
    int arr[32];
    int i = 0;
    while (n>0) {
        arr[i] = n%2;
        n = n/2;
        i++;
    }
    for (int j = 31 ; j >= i ; j --) {
        arr[j] = 0;
    }
    int base = 1;
    int value = 0 ;
    for (int j = 31 ; j >= 0 ; j--) {
        value = value +arr[j]*base;
        base = base*2;
    }
    cout << value;
    }
    int main() {
        reverseBits(20);
    }