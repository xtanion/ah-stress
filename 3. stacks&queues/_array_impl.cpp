#include <bits/stdc++.h>
using namespace std;

class Stack{

    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x){
        if (top<size-1) {
            top++;
            arr[top] = x;
        }else{
            cout<< "Stack overflow" <<endl;
        }
    }

    void pop(){
        if(top>0){
            top--;
        }else{
            cout<< "Stack is already empty" <<endl;
        }
    }

    int peek(){
        if (top>=0) return arr[top];
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
};

int main(){
    Stack st = Stack(2);
    st.push(1);
    cout << st.peek() << endl;
    st.push(2);
    cout << st.peek() << endl;
    st.push(3);
    // st.push(3);
}