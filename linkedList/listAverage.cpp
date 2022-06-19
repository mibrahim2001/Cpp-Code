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



//function to find the average of two consecutive numbers
void listAverage(node* &head1, node* &head2){
    node* temp = head1;
    node* nextNode = temp->next;

    int num1 = 0;
    int num2 = 0;
    int avg = 0;

    while(temp != NULL || nextNode != NULL){
        num1 = temp->data;
        num2 = nextNode->data;
        avg = (num1+num2)/2;
        temp = nextNode->next;
        if(nextNode->next != NULL){
            nextNode = nextNode->next->next;
        }
        else{
            nextNode = nextNode->next;
        }
        insertAtTail(head2,avg);
    }

    

}



//Driver Function 
int main(int argc, char const *argv[])
{
    node* head1 = NULL;
    node* head2 = NULL;

    //inserting values at tail
    insertAtTail(head1,5);
    insertAtTail(head1,2);
    insertAtTail(head1,4);
    insertAtTail(head1,6);
    insertAtTail(head1,2);
    insertAtTail(head1,7);
    

    
    
    displayLinkList(head1);
    
    listAverage(head1,head2);

    displayLinkList(head2);
    


    return 0;
}
