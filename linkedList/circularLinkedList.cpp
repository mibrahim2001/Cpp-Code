#include <bits/stdc++.h>
using namespace std;

//a class of node
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

//function to insert at head
void insertAtHead(node* &head, node* &tail,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        head->next = n;
        tail = n;
        tail->next = n;
    }
    
    n->prev = tail;
    n->next = head;
    head->prev = n;
    tail->next = n;
    head = n;
}

//function to add a node at last of linked list
void insertAtTail(node* &head, node* &tail, int val){
    if(head == NULL){
        insertAtHead(head,tail,val);
        return;
    }
    node* n = new node(val);
    n->next = head;
    n->prev = tail;
    head->prev = n;
    tail->next = n;
    tail = n;
}

//function to display the list
 void displayList(node* head){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    node* temp = head;
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }while(temp != head);
    cout<<"Again to head"<<endl;
}

//function to insert at a specific position 
void insertAtPosition(node* &head, node* &tail, int pos, int val){
    node* n = new node(val);
    if(pos == 1){
        insertAtHead(head,tail,val);
        return;
    }

    node* temp = head;

    //we do pos-- to reach at previous node of the actual position 
    pos--;
    while(pos>1){
        temp = temp->next;
    }
    n->prev = temp;
    n->next = temp->next;
    temp->next->prev = n;
    temp->next = n;
    
}

//function to delete head of the 
int deleteAtHead(node* &head){
    if(head==NULL){
        cout<<"List is empty nothing to delete!";
        return -1;
    }
    node* temp = head;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    head = temp->next;
    delete temp;
    return 1;
}

//function to delete a node by its value
int deleteNode(node* &head, int val){
    node* temp = head;
    if(temp->data == val){
        return deleteAtHead(head);
    }

    while(temp->next!=head){
        if(temp->data == val){
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            delete temp;
            return 1;
        }
        temp = temp->next;
    }

    return -1;


}


//Driver function 
int main(int argc, char const *argv[])
{
    node* head = NULL;
    node* tail = NULL;

    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtHead(head,tail,0);
    insertAtTail(head,tail,3);
    cout<<"Initial list: "<<endl;
    displayList(head);
    cout<<"Deleting the head"<<endl;
    deleteAtHead(head);
    displayList(head);
    cout<<"Deleting the node with value 2"<<endl;
    deleteNode(head,2);
    displayList(head);
    cout<<"Inserting at position 1"<<endl;
    insertAtPosition(head,tail,1,0);
    displayList(head);
    cout<<"Inserting at postion 2"<<endl;
    insertAtPosition(head,tail,2,10);
    displayList(head);



    return 0;
}


