#include<iostream>
using namespace std;
struct node{

    int data;
    node *next;
};
int isEmpty(struct node* top){
    if(top == NULL) return 1;
    return 0;
}

struct node* push(struct node* top, int data){
    struct node* p = new node;
    p->data = data ;
    p->next = top;
    top = p;
    return top;
}
void traversal ( struct node* top){
    cout<<"Stack using Linked list : "<<endl;
    while(top){
       
        cout<<top->data<<" ";
        top = top->next;
    }
}
int pop(struct node** top){

    if(isEmpty(*top)){
        cout<<"Stack underflow";
        exit(1);
    }
    else{
        struct node* ptr = *top;
        *top = (*top)->next ;
        int x = ptr->data;
        free(ptr);
        return x;
    } 
}
int main()
{
   struct node* top = NULL;
   top = push(top,20);
   top = push(top,15);
   top = push(top,10);
  
   traversal(top);
   cout<<endl;

   cout<<"element deleted using stack : "<<pop(&top)<<endl;

   traversal(top);
   

    return 0;
}


