#include<iostream>
#include<stack>
using namespace std;

class st{
    stack<int>s1;
    stack<int>s2;

    public:
        void push(int data){

           while(s1.size()){
                int x = s1.top();
                s2.push(x);
                s1.pop();

            }
            s1.push(data);

             while(s2.size()){
                int x = s2.top();
                s1.push(x);
                s2.pop();

            }
        }
        int pop(){
           int x = s1.top();
           s1.pop();
           return x;
        }

        int First(){
            return s1.top();
        }

        bool isEmpty(){
            if(s1.top() ==-1)
                return true;
            else false;
        }
        int Size(){
            return s1.size();
        }

};
int main()
{
    st q;
    cout<<"Elements are : 4 3 2 1 "<<endl;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);

       while (q.Size())
 {
    
    cout<<"First element of queue using stack : "<<q.First()<<endl;
    cout<<"Deleting an element : "<<q.pop()<<endl;
    cout<<"Size of an element : "<<q.Size()<<endl;
    cout<<endl;
 }
    return 0;
}