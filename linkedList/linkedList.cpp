#include<bits/stdc++.h>
using namespace std;

/* A linked list is a linear data structure, in which the elements are not stored at 
contiguous memory locations.  */

//a node class to make nodes
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next = NULL;
    }   
};

//a function to insert a new value at the head of the linked list 
void insertAtHead(node* &head, int val){
    //first make a new node 
    node* n = new node(val);
    //then store the address of head(first value in next of new node)
    n->next = head;
    //now point the head pointer to the new node
    head = n;
}

//a function to insert a new value at the tail of the linked list
void insertAtTail(node* &head, int val){
    //first we will make a new node that we have to insert at the tail with the value passed in function
    node* n = new node(val);

    //checking if the head is empty and its the first value to be added 
    if(head == NULL){
        head = n;
        return;
    }
    //adding the node at the tail 
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    //placing the address of the new node in the last node previously
    temp->next = n;
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


//a function to search for value in linked list 
bool searchLinkList(node* head, int key){
    node* temp = head;

    while(temp!=NULL){
        //if key is found in data of any node return true
        if(temp->data == key){
            return true;
        }
        //move pointer temp to next node
        temp = temp->next;
    }

    //else return false
    return false;
}


//the function given above will not work for head so making another function for head
void deleteAtHead(node* &head){
    //making a temporary node to del
    node* nodeToDel = head;
    //moving head to the next value
    head = head->next;
    //deleting the head
    delete nodeToDel;
}


//a function to delete a node in linked list 
void deletion(node* &head, int val){
    //if the list is empty there is nothing to delete
    if(head == NULL){
        return;
    }
    //if their is only one element in list which is at head of course then 
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    //we will traverse throught the list until we find the node whose next point to the node that we have to del
    while(temp->next->data != val){
        temp = temp->next;
    }
    //then we store the address of the node we have to del in a temp node
    node* nodeToDel = temp->next;
    //now we join the temp node to the node which is next to node we have to delete
    temp->next = temp->next->next;
    //finally delete the node
    delete nodeToDel;

}



//Driver Function 
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

    //searching in the list
    cout<<searchLinkList(head,6)<<endl;

    //deletion in the list 
    deletion(head,2);
    displayLinkList(head);

    //deleting at head
    deleteAtHead(head);
    displayLinkList(head);
    return 0;
}
