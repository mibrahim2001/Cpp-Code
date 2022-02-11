#include<bits/stdc++.h>
using namespace std;


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
//function to reverse a linked list iteratively whose return value is node* which is actually the new head 
node* reverseLinkedList(node* &head){
    /* we will take three pointers one to mark previous and a current node and one to mark next node so that 
    we don't lose the address to the next node */
    node* curr = head;
    node* prev = NULL;
    node* next;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

//reverse a linked list recursively
node* reverseRecursively(node* &head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    //recursive case
    node* newHead = reverseRecursively(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
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



//Driver Function 
int main(int argc, char const *argv[])
{
    node* head = NULL;
    //inserting values at tail
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    displayLinkList(head);

    //reversing the nodes by iterative method
    node* newHead = reverseLinkedList(head);
    displayLinkList(newHead);

    //reversing the node by recursive method 
    node* newhead = reverseRecursively(newHead);
    displayLinkList(newhead);

    return 0;
}