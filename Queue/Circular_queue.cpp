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

        size =5;  
        curr_size=0;              
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isEmpty(){                       // checking is queue has element or not
        if(front == rear) return true;
        else return false;
    }

    void enqueue(int data){                 // pushing the element in queue
        if( (front==0 && rear == size-1) || (rear==(front-1)%(size-1))){
            cout<<"queue is full";
            exit(1);
        }
        else if(front == -1){
            front =rear =0;
        }
        else if(rear == size-1 && front!=0){
                rear =0;
        }
        else{
            rear ++;
           
        }
        arr[rear]= data;
        cout<<"Data Entered :"<< arr[rear]<<endl;
        curr_size++;
    }
    int dequeue(){                       // Removing the element from queue 
        if(isEmpty()) 
        {
            cout<<"underflow condition"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
        if(front == rear){
            front = rear = -1;
        }
        if(front == size-1 ){
            front =0;
        }
        else{

            front++;
            curr_size--;
           
            return ans;
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


cout<<"Deleting an element : "<<q.dequeue()<<endl;
q.enqueue(6);
 
  
  
    
    
    return 0;
}