#include <iostream>
using namespace std;
struct node {
    int data;
    node* next;
    node* prev;
} *start, *temp, *ptr, *end1;
void insert(int value) {
    ptr = new node();
    ptr->next = nullptr;
    ptr->prev = nullptr;
    ptr->data = value;
    if (start == nullptr) {
        start = new node();
        start = ptr;
    }
    else {
        temp = start;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
    ptr->prev = temp;
    temp->next = ptr;
    }
    end1 = ptr;
}
void traverse() {
    temp = start;
    while(temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void traverseend() {
    temp = end1;
    while(temp != nullptr) {
        cout << temp->data  << endl;
        temp = temp->prev;
    }
}
void delete1(int value) {
    temp = start;
    if (start->data == value) {
        start = start->next;
        start->prev = nullptr;
        free(temp);
    }
    else {
    temp = start;
    while(temp->data != value) {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
} 
}
int main() {
    int value, n, deletevalue;
    // start = new node();
    temp = new node();
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;
    for (int i = 0 ; i < n ; i ++) {
        cin >> value;
        insert(value);
    }
    cout << "Printing linked list from starting : ";
    traverse();
    cout << "Printing linked list from ending : ";
    traverseend();
    cout << "Enter the number u want to delete : ";
    cin >> (deletevalue);
    delete1(deletevalue);
    cout << "Printing linked list after deleting : ";
    traverse();
}