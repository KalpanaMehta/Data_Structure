#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;

    node(int d) {
        this->data = d;
        next = NULL;
    }
};

void enqueue(struct node *&front, struct node *&rear, int data) {
    struct node *n = new node(data);

    if (front == NULL) {
        front = rear = n;
    } else {
        rear->next = n;
        rear = n;
    }
}

int dequeue(struct node *&front, struct node *&rear) {
    int val = -1;

    if (front == NULL) {
        cout << "Queue is empty" << endl;
    } 
    else if(front==rear){
        struct node *ptr = front;
        val = ptr->data;
        front =rear=NULL;
        delete ptr;
    }
    else {
        struct node *ptr = front;
        val = ptr->data;
        front = front->next;
        delete ptr;
    }

   return val;
}

void traversal(struct node *front) {
    cout << "Printing the elements of the linked list" << endl;
    while (front) {
        cout << front->data << " ";
        front = front->next;
    }
}

int main() {
    struct node *f = NULL;
    struct node *r = NULL;
    enqueue(f, r, 10);
    enqueue(f, r, 20);
    enqueue(f, r, 30);
    traversal(f);

    cout << "Removing the element from the queue: " << dequeue(f, r) << endl;
    cout<<"Queue after removing element :" <<endl;
    traversal(f);

    return 0;
}
