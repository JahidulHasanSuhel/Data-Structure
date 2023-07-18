#include<bits/stdc++.h>
#include<conio.h>
#include<stack>
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
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }    
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stak underflow"<<endl;
        }
    }
    int peak(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
system("cls");
    Stack st(6);
    st.push(4);
    st.push(5);
    st.push(6);
    
    cout<<st.peak()<<endl;

    st.pop();

    cout<<st.peak();
    return 0;
}
