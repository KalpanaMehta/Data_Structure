#include<bits/stdc++.h>

using namespace std;
class st {
    int size;
    int * arr;
    int top;

    public:
        st() {
        top = -1;
        size = 10;
        arr = new int[size];
        }

    // pushing the element on stack 

    void push(int x) {
        top++;
        arr[top] = x;
    }
     // deleting an element from stack 
    int pop() {
        int x = arr[top];
        top--;
        return x;
    }
     // returning the top element from a stack 
    int Top() {
        return arr[top];
    }

     // returning size of stack 

    int Size() {
        return top + 1;
    }
     // deallocating the memory 
     
    ~st(){
        delete[] arr;
    }
};
int main() {

    st s;
    cout<<"Pushing the element on stack "<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Top of stack : " << s.Top() << endl;
    cout << "The deleted element is : " << s.pop() << endl;
    cout << "Top of stack after deleting an element " << s.Top() << endl;
    cout << "Size of stack after deleting an element " << s.Size() << endl;
  return 0;
}