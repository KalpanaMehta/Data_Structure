#include<iostream>
using namespace std;

class que {

    int *arr;
    int front, rear;
    int size;
    int curr_size;

public:

    que(){                 // With constructor setting the value of my structure
                           // that what would be its size where rear and fron will be pointing

        size = 10;  
        curr_size=0;              
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    bool isEmpty(){                       // checking is queue has element or not
        if(front == rear) return true;
        else return false;
    }

    void enqueue(int data){                 // pushing the element in queue
        if(rear == size){
            cout<<"overflow"<<endl;
            exit(1);
        }
        arr[rear] = data;
        rear++;
        curr_size++;
    }
    int dequeue(){                       // Removing the element from queue 
        if(isEmpty()) 
        {
            cout<<"Onderflow condition"<<endl;
            return -1;
        }
        else{
            int data = arr[front];
            arr[front] = -1;
            front++;
            curr_size--;
            if( front == rear){
                front =0;
                rear =0;
            }
            return data;
        }
        
    }
    int Top(){                                             
        if(front == rear) return -1;
        return arr[rear-1];
    }
    int Size(){
        return curr_size ;
    }

    ~ que(){
        delete[] arr;
    }
};

int main()
{
    que q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

 while (q.Size())
 {
    
    cout<<"Peek element of queue : "<<q.Top()<<endl;
    cout<<"Deleting an element : "<<q.dequeue()<<endl;
    cout<<"Size of an element : "<<q.Size()<<endl;
    cout<<"queue is empty or not  : "<<q.isEmpty()<<endl;
    cout<<endl;
 }
 
  
  
    
    
    return 0;
}