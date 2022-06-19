#include<iostream>
using namespace std;

class CircularQueue{
public:
    int* arr;
    int front = -1;
    int back = -1;
    int capacity = 0;


public:
    //constructor
    CircularQueue(int n){
        capacity = n;
        arr = new int[n];
    }
    //function to check if the queue is full
    bool isFull(){
        return ((back+1)%capacity == front);
    }
    bool isEmpty(){
        return (front == -1 && back == -1);
    }
    //function to add element to queue
    void enqueue(int x){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            back = (back+1)%capacity;
            arr[back] = x;
            if(front == -1){
                front = 0;
            }
        }
    }
    //function to remove element
    int dequeue(){
        int e = 0;
        if(isEmpty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            e = arr[front];
            if(front==back){
                front = -1;
                back = -1;
            }else{
                front = (front+1)%capacity;
            }
        }

        return e;
    }

    int frontOfQueue(){
        int e = 0;
        if(isEmpty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            e = arr[front];
        }

        return e;
    }

    int getBack(){
        return back;
    }


};

int main()
{
    CircularQueue* queue = new CircularQueue(10);
    queue->enqueue(10);
    queue->enqueue(20);
    queue->enqueue(5);
    queue->enqueue(4);



    //printing the queue
    int loop = queue->back;
    for(int i=0; i<=loop; i++){
        cout<<queue->dequeue()<<" ";
    }

    return 0;
}
