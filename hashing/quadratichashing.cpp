#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int const hash_table_size = 10;
    int hash_table[hash_table_size];
    fill(hash_table, hash_table + hash_table_size, -1);
    for (int i = 0 ; i < 5 ; i++) {
        int n;
        cout << "Enter the value u want to insert in hash table?";
        cin >> n;
        int index = n%hash_table_size;
        if (hash_table[index] == -1)  {
        hash_table[index] = n;
        }
        else {
            int i = 0;
            while(hash_table[index] != -1) {
                index = (n + (i*i))%hash_table_size;
                i++;
            }
            hash_table[index] = n;
        }
    }
    for (int i = 0 ; i < hash_table_size ; i++) {
        cout << i << "->" <<hash_table[i] << endl;
    }
}