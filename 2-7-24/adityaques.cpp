#include <iostream>
using namespace std;
struct node {
    public:
        int data;
        node* add;
}*start,*ptr,*temp,*t1, *temp1;
void insert_end(int value) {
    ptr = new node();
    ptr->data = value;
    ptr->add = nullptr; 
    if (start == nullptr) {
        start = ptr;
    }
    else {
        temp = start;
        while(temp->add != nullptr) {
            temp = temp->add;
        }
        temp->add = ptr;
}
}
void traverse() {
        temp = start;
        while(temp!= nullptr) {
        cout << temp->data << endl;
        temp = temp->add;
        }
    }
void remove1() {
    if (start->data < 0) {
        while (start->data < 0) {
        temp = start;
        start = start->add;
        free(temp);
    }
    }
    temp1 = start;
    while(temp1 != nullptr) {
        cout << "inside";
        t1 = temp1;
        temp1 = temp1->add;
        if (temp1->data < 0) {
            t1->add = temp1->add;
            free(temp1);
        }
    }
    }
int main() {
    int n;
    cout << "Enter the number of elements u want to insert? ";
    cin >> n;
    int value;
    for (int i = 0 ; i < n ; i++) {
        cout << "Enter the value: ";
        cin >> value;
        insert_end(value);
    }
    cout << "Before deletion";
    traverse ();
    remove1();
    cout << "After deletion";
    traverse();
}