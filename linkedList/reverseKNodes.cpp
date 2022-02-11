#include<bits/stdc++.h>
using namespace std;

/* In this problem we will reverse the k nodes of a linked list for example if k is 2 we will reverse 
the given list in pair e.g 1->2->3->4 will be reversed to 2->1->4->3 */

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

//function to reverse k nodes
node* reverseKNodes(node* &head, int k){
    //first we will reverse the first k nodes
    node* curr = head;
    node* prev = NULL;
    node* next;

    //we also want to check if the nodes left are equal to k or more because we cannot reverse less than k 
    node* check = curr;
    int c = 1;
    while(check->next != NULL && c<=k){
        c++;
        check = check->next;
    }

    if(c<k){
        return head;
    }

    //reversing the first k nodes 
    int count=0;
    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //then we will call the function recursively to reverse the rest of the linked list 
    if(next!=NULL){
        head->next = reverseKNodes(next,k);
    }

    //we will return prev because it will be the next link in the new head 
    return prev;
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
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    displayLinkList(head);

    //reversing k nodes 
    int k = 3;
    node* newhead = reverseKNodes(head,k);
    displayLinkList(newhead);


    return 0;
}
