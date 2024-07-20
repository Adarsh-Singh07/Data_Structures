#include <iostream>
using namespace std;
int main() {
    void fun();
    fun();
}
    int que[10];
    int top = -1;
    string name;
    int nu;
    int temp;
    fun () {
        //which operation to perform
        cout << "Enter you want to enqueue or dequeue or end? ";
        cin >> name;
        //enqueue
        if (name == "e") {
            if (top == sizeof(que)) {
                cout << "Queue overflow" << endl;
            }
            else {
                cout << "Enter the number you want to enqueue? ";
                cin >> nu;
                top = top + 1;
                que[top] = nu; 
            }
            fun();
        }
        //dequeue
        else if (name == "d") {
            if (top < 0) {
                cout << "Queue underflow" << endl;
            }
            else {
                temp = que[0];
                for (int i = 0 ; i <= top ; i++) {
                    que[i] = que[i+1];
                }
                top = top-1;
                cout << "Number deleted is " << temp << endl;
            }
            fun();
        }
        //end 
        else if (name == "end"){
            for (int i = 0; i <= top; i++) {
                cout << que[i] << endl;
            }
        }
    }