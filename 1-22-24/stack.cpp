#include <iostream>
using namespace std;
int main() {
void fun();
        fun();
}
      int stck[5];
    int top = -1;
    string name;
    int nu;
    int temp;
        void fun () {
      
        cout << "Enter you want to push or pop? ";
        cin >> name;
        if (name == "push") {
            if (top == sizeof(stck)) {
            cout << "Stack overflow";
        }
        else {
            cout << "Enter the number you want to push? ";
            cin >> nu;
            top = top + 1;
            stck[top] = nu; 
            cout << top;
        }
            fun();
        }
        else if (name == "pop") {
            if (top < 0) {
                cout << "Stack underflow";
            }
            else {
                temp = stck[top];
                top = top-1;
                cout << top;
            }
            fun();
        }
        else if (name == "end"){
            for (int i = 0; i <= top; i++) {
                cout << stck[i];
            }
        }
        }