#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        next = NULL;
    }

};
node* insert(int data,node* &head){
    node * ptr = new node(data);
    if(head==NULL){
        head = ptr; 
        return head;
    }
    node* p= head;
    ptr->next = p;
    head = ptr;

    return head;
}
int deleteFirst (node * &head){
        if(head == NULL) return 0;
        node * p = head;
        int data = p->data ;
        p = p->next ;
        head = p;
    return data;
}
int deleteLast(node* &head){
    if(head == NULL) return 0;
    node * p = head;
    while(p->next->next!=NULL){
        p = p->next;
    }
    int data = p->next->data;
    p->next = NULL;
    return data;
}
int deletePosition(node* &head,int index){
    if(head == NULL) return 0;
    node * p = head;
    int cnt = 1;
    while(cnt != index-1){
        p = p->next ; 
        cnt++;
    }
    cout<<cnt<<" "<<p->data;
        int data = p->next->data;
        p->next = p->next->next;
        
        return data;
    }

void traversal (node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    node* head = NULL;
    insert(5,head);
    insert(6,head);
    insert(7,head);
    insert(8,head);
    traversal(head);
    cout<<endl;
    // cout<<deleteFirst(head)<<" "<<endl;
    // cout<<deleteLast(head)<<" "<<endl;
    cout<<deletePosition(head,3)<<" "<<endl;
    traversal(head);
    
    return 0;
}