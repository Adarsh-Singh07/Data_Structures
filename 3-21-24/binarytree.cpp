#include <iostream>
using namespace std;
struct tree {
    int data;
    tree* leftChild;
    tree* rightChild;
} *root, *current, *parent, *ptr;
void insert(int value) {
    ptr = new tree();
    ptr->data = value;
    ptr->leftChild = nullptr;
    ptr->rightChild = nullptr;
    if (root == nullptr) {
        root = new tree();
        root = ptr;
    }
    else {
        current = new tree();
        parent = new tree();
        current = root;
        while(1) {
            parent = current;
            if (value < current->data) {
                current = current->leftChild;
                if (current == nullptr) {
                    parent->leftChild = ptr; 
                    return;
                }
            }
            else {
                current = current->rightChild;
                if (current == nullptr) {
                    parent->rightChild = ptr;
                    return;
                }
            }
        }
    }
}
void pretraverse(struct tree* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    pretraverse(root->leftChild);
    pretraverse(root->rightChild);
}
void posttraverse(struct tree* root) {
    if (root == NULL) {
        return;
    }
        posttraverse(root->leftChild);
        posttraverse(root->rightChild);
        cout << root->data << " ";
}
void intraverse(struct tree* root) {
    if (root == NULL) {
        return;
    }
        intraverse(root->leftChild);
        cout << root->data << " ";
        intraverse(root->rightChild);
}
int main() {
    int n;
    cout << "Enter the number of values u want to insert? ";
    cin >> n;
    int value;
    for (int i = 0 ; i < n ; i++ ){
        cout << "Enter the value: ";
        cin >> value;
        insert(value);
    }
    cout<<pretraverse(root)<<endl;
    cout<<posttraverse(root)<<endl;
    intraverse(root);
}