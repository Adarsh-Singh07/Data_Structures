#include <iostream>
using namespace std;
struct inorderpreorder {
    int data;
    inorderpreorder* left;
    inorderpreorder* right;
    inorderpreorder(value) {
        
    } 
}*root, *current, *ptr;

void fun(int preorder[] , int inorder[]) {
    for (int i = 0 ; i < preorder.length() ; i++) {
        ptr = new inorderpreorder();
        ptr->left = nullptr;
        ptr->right = nullptr;
        if (i == 0) {
            root = ptr;
            root->data = preorder[i];
        }
        else {

        }
    }
    root = new inorderpreorder();
    inorder[] 
}

int main() {
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};  
}