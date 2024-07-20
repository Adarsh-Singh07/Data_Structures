#include <iostream>
using namespace std;
struct node {
        public:
            int data;
            node* add;
    }*start,*ptr,*temp,*temp1;
    insert_beg()
    {
        if (start == NULL) {
            cout << "Enter a number: ";
            cin >> start->data;
            start->add = nullptr;
        }
        else {
            ptr = new node();
            ptr->add = start;
            start = ptr;
            start->data = 20;
        }
    }
    insert_end() {
        ptr = new node();
        temp = start;
        while(temp->add!= nullptr) {
        temp = temp->add;
        }
        temp->add = ptr;
        ptr->add = nullptr;
        ptr->data = 30;
    }
    insert_in_index(int index) {
        ptr = new node();
        temp = start;
        temp1 = start;
        int i = 0;
        while (i != index) {
        temp = temp->add;
        i++;
        }
        temp1 = temp->add;
        temp->add = ptr;
        ptr->add = temp1;
        ptr->data = 40;
        }
    insert_after (int aftervalue) {
        ptr = new node();
        temp = start;
        while (temp->data != aftervalue) {
            temp = temp->add;
        }
        temp1 = temp->add;
        temp->add = ptr;
        ptr->add = temp1;
        ptr->data = 50;
    }
    insert_before(int beforevalue) {
        ptr = new node();
        temp = start;
        while (temp->add->data != beforevalue) {
            temp = temp->add;
        }
        ptr->add = temp->add;
        temp->add = ptr;
        ptr->data = 90;
    }
    delete_start() {
        temp = start;
        start = start->add;
        free(temp);
    }
    delete_end() {
        temp = start;
        while(temp->add != nullptr) {
            temp1 = temp;
            temp = temp->add;
        }
        temp1->add = nullptr;
        free(temp);
    }
    delete_specific_value(int value) {
        temp = start;
        while (temp->data != value) {
            temp1 = temp;
            temp = temp->add;
        }
        temp1->add = temp->add;
        free(temp);
    }
    sorting(int n) {
        int arr[n];
        temp = start;
        int i = 0;
        int val;
        while (temp!=nullptr) {
            arr[i] = temp->data;
            i++;
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
    i = 0;
    temp = start;
    while (temp!=nullptr) {
            temp->data = arr[i];
            i++;
        }
    }
    traverse() {
        temp = start;
        while(temp!= nullptr) {
        cout << temp->data << endl;
        temp = temp->add;
        }
        cout << endl;
    }
int main() {
    start = new node();
    start->data= 10;
    start->add = nullptr;
    int n = 1;
    traverse();
    // INSERTION IN BEGINNING
    cout << "Inserting in beginning"<<endl;
    insert_beg();
    n++;
    traverse();
    cout << "Insetionin end" << endl;
    // INSERTION IN ENDING
    insert_end();
    n++;
    traverse();
    cout << "Insertion in specific index"<< endl;
    // INSERTION IN AN INDEX
    int index;
    cout << "Enter the index of the linked list in which u want to insert? ";
    cin >> index;
    insert_in_index(index-2);
    n++;
    traverse();
    // INSERTION AFTER VALUE
    cout << "Enter the value after which u want to insert? ";
    int value;
    cin >> value;
    insert_after(value);
    n++;
    traverse();
    // INSERTION BEFORE VALUE
    cout << "Enter the value before which u want to insert? ";
    int value2 ; 
    cin >> value2;
    insert_before(value2);
    n++;
    traverse();
    // DELETION FROM START
    cout << "Deletion From Start" <<endl;
    delete_start();
    n--;
    traverse();
    // DELETION FROM END
    cout << "Deletion From End" << endl;
    delete_end();
    n--;   
    traverse();
    // DELETION OF SPECIFC VALUE
    cout << "Deletion of specific value" << endl;
    int value3;
    cout << "Enter the value u want to delete? ";
    cin >> value3;
    delete_specific_value(value3);
    n--;
    traverse();
    // SORTING
    cout << "Sorting" <<endl;
    sorting(n);
    traverse();
}