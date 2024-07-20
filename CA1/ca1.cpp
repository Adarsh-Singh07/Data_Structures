#include <iostream>
using namespace std;
int main() {
    // CREATION OF SOCIAL MEDIA ARRAY BEFORE HAND
    cout << "******Welcome to SOCIAL MEDIA******" << endl;
    int n;
    string arr [20];
    cout << "Enter the number of posts u want before hand? ";
    cin >> n;
    cout << "Now enter the posts: ";
    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }
    cout << "Before performing any operation the array is: " << endl;
    for (int i = 0 ; i < n ; i ++) {
        cout <<(i+1)<< ". " <<arr[i] << endl;
    }
    // ASKING USER WHICH OPERATION THEY WANT TO PERFORM
    cout << "Enter the type of operation u want to perform?" << endl << "1. Insert a new post" << endl << "2. Delete some old post" << endl;
    int c;
    cin >> c;
    // INSERTION IN FIRST(0) POSITION
    if (c == 1) {
        string post;
        cout << "Enter the post  want to insert? ";
        cin >> post;
        for (int i = n ; i >= 0 ; i --) {
            arr[i+1] = arr[i];
        }
        arr[0] = post;
        n++;
    }
    // DELETION IN Nth POSITION
    else if (c == 2) {
        int id; 
        cout << "Enter the ID of the post which u want to delete? ";
        cin >> id;
        if (id != n+1) {
        for (int i = id-1 ; i < n ; i ++) {
            arr[i] = arr[i+1];
        }
        }
        n--;
    }
    else {
        cout << "Nothing is possible" <<endl;
    }
    // AFTER THE OPERATION
    cout << "After operations the array of the posts is" << endl;
    for (int i = 0 ; i < n ; i ++) {
        cout <<(i+1)<< " " <<arr[i] << endl;
    }
}