#include<bits/stdc++.h>
using namespace std;

/* A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, 
together with next pointer and data which are there in singly linked list. */

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

//function to add a node at the head 
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    //only do this if head is not null
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}

//function to add a node at the tail 
void insertAtTail(node* &head, int val){

    //a case where there is no head
    if(head == NULL){
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;

}

bool deleteAtHead(node* &head){
    node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    delete temp;
    return true;
}


//a function to delete a node from doubly linked list 
bool deleteNode(node* &head, int val){
    node* temp = head; 

    //if the value matches the value of head 
    if(temp->data == val){
        return deleteAtHead(head);

    }
    
    while(temp != NULL){
        if(temp->data == val){
            temp->prev->next = temp->next;
            if(temp->next!=NULL){
                temp->next->prev = temp->prev;
            }
            delete temp;
            return true;
        }

        temp = temp->next;

    }
    
    return false;
}

//a function to display the values in linked list 
void displayLinkList(node* head){
    node* temp = head;
    
    //now we will traverse through the list to diplay the values
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//Driver function 
int main(int argc, char const *argv[])
{
    node* head = NULL;
    //inserting values at tail
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    displayLinkList(head);

    //inserting value at head
    insertAtHead(head,4);
    insertAtHead(head,5);
    displayLinkList(head);

    //deleting a node by value 
    cout<<deleteNode(head,5)<<endl;
    displayLinkList(head);

    return 0;
}
