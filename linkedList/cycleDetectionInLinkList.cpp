#include<bits/stdc++.h>
using namespace std;

/* A cycle can be determined in a linked list by floyds hare and tortoise algorithm in this algorithm
a fast pointer(hare) and a slow pointer(tortoise) are taken and slow pointer is moved by one node whereas
fast pointer is moved by two points and there comes a point when they point to the same node if there is a
cycle in the linked list */


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


//function to create a cycled link list so that we can check our algo on that list 
void cycleLinkList(node* &head, int pos){
    node* temp = head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            //if count matches the position given then take this node in startNode(cycle will be started from this node)
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    //now we will make a cycle by placing the address of the start node in the next of the last node
    temp->next = startNode;   
}


//function based on floyds algorithm to check if there is a cycle in the list or not 
bool isCycled(node* &head){
    //we will take two pointers
    node* slowptr = head;
    node* fastptr = head;

    while(fastptr->next != NULL && fastptr != NULL){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        //now we will check if the two pointers point to same node at any point 
        if(slowptr == fastptr){
            return true;
        }
    }

    return false; 
}


//a function to remove the cycle (this function is written considering the list is cycled)
void removeCycle(node* &head){
    //again we will take two pointers here 
    node* slow = head;
    node* fast = head;
    
    //first we find the point at which both the slow and fast ptr becomes equal
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (slow!=fast);
    

    /*now point the fast to the head and make slow and fast move by one point and at some point their next will
    point to a same node and that node would be the start of cycle so we will change the next of slow pointer 
    to null to break the cycle*/

    fast = head;
    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL; 
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
    
    //create cycle linked list
    cycleLinkList(head,3);

    //displayLinkList(head);

    //checking if list is cycled
    cout<<"Before removing cycle: "<<endl;
    cout<<isCycled(head)<<endl;

    //removing cycle from list
    removeCycle(head);

    //again checking the list to confirm that out function worked
    cout<<"After removing cycle from the list: "<<endl;
    cout<<isCycled(head)<<endl;
    displayLinkList(head);

  


    return 0;
}
