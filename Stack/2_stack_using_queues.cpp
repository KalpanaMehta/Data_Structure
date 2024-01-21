#include <iostream>
#include <queue>  // Include the <queue> header for using queue

using namespace std;

class st_qu {
    queue<int> q1;
    queue<int> q2;

public:
    void push(int x) {
        // Push the new element onto q1
        q1.push(x);

        // Move all elements from q2 to q1
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }

        // Swap q1 and q2 
        swap(q1, q2);
    }

    int pop() {
        int data = q2.front();
        q2.pop();
        return data;
    }

    int Top() {
        return q2.front();
    }
    int Size(){
        return q2.size();
    }
};

int main() {
    st_qu s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);


     while (s.Size())
 {
    
    cout<<"Top element of stack using queue : "<<s.Top()<<endl;
    cout<<"Deleting an element : "<<s.pop()<<endl;
    cout<<"Size of an element : "<<s.Size()<<endl;
    cout<<endl;
 }
    return 0;
}

