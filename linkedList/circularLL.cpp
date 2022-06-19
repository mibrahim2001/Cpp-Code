#include <iostream>

using namespace std;

class ClinkList {
  public:
    void insertAtFront(int data){
        ListNode *node = new ListNode(data);
        if(isEmpty()){
          head_ = node;
          node->next = head_;
          return;
        }
        ListNode* cur = head_;
        while(cur->next != head_)
            cur = cur->next;
        node->next = head_;
        cur->next = node;
        head_ = node;
    }

    void insertAtEnd(int data){
        ListNode* node = new ListNode(data);
        if(isEmpty()){
          head_ = node;
          node->next = head_;
          return;
        }
        ListNode* cur = head_;
        while(cur->next != head_){
          cur = cur->next;
        }
        cur->next = node;
        node->next = head_;
    }


    void insertAt(int loc, int data){
        int count = 0;
        if(isEmpty())
          return;
        if(loc == 1){
          insertAtFront(data);
          return;
        }
        ListNode* cur = head_;
        ListNode* node = new ListNode(data);
        while(cur){
          count ++;
          if(count == loc - 1){
            node->next = cur->next;
            cur->next = node;
            break;
          }
          cur = cur->next;
        }
    }

    void deleteAtStart(){
      if(isEmpty())
        return;
      if(head_->next = head_){ //there is only one node
        delete head_;
        head_ = nullptr;
        return;
      }

      ListNode* cur = head_;
      while(cur->next != head_){
        cur = cur->next;
      }

      cur->next = head_->next;
      delete head_;
      head_ = cur->next;
    }
/*
    void deleteAtEnd(){
      if(isEmpty())
        return;
      if(!head_->next){ //there is only one node
        delete head_;
        head_ = nullptr;
        return;
      }

      ListNode* cur = head_;
      while(cur->next)
        cur = cur->next;
      cur->prev->next = nullptr;
      delete cur;
      cur = nullptr;
    }

    void deleteAt(int loc){
      if(isEmpty())
        return;
      if(loc == 1){
        deleteAtStart();
        return;
      }
      ListNode* cur = head_;
      int count = 0;
      while(cur != nullptr){
        count++;
        if(count == loc){
          ListNode* toDelete = cur;
          cur->prev->next = cur->next;
          cur->next->prev = cur->prev;
          break;
        }
        cur = cur->next;
      }
    }
*/
    void printList(){
      ListNode* cur = head_;
      if(isEmpty())
        return;
      while(cur->next != head_){
        cout << cur->data << "->";
        cur = cur->next;
      }
      cout << cur->data << "->";
    }

    bool isEmpty(){ return !head_;}

    ClinkList() : head_(nullptr) { }

    ~ClinkList() {
      ListNode *thru = head_;
      while (thru != nullptr) {
        ListNode* toDelete = thru;
        thru = thru->next;
        delete toDelete;
        toDelete = nullptr;
      }
    }

  private:
    class ListNode {
      public:
        int data;
        ListNode *next;
        ListNode(int data) : data(data), next(nullptr){ }
    };

    ListNode* head_;


};

int main()
{
    ClinkList dList;
    dList.insertAtFront(1);
    dList.insertAtFront(2);
    dList.insertAtFront(3);
    dList.insertAtEnd(5);
    dList.insertAt(2, -4);
    dList.printList();

    //dList.deleteAt(2);
    //dList.deleteAtEnd();
    //dList.deleteAtStart();
    cout << endl << "After deleting" << endl;
    dList.printList();
    return 0;
}