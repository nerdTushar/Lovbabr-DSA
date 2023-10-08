#include <iostream>
#include <queue>
using namespace std;

class Queue {
private:
    int* arr;
    int qfront;
    int rear;
    int size;
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size){
            cout<<"Queue is empty"<<endl;
        }else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear){
            return -1;
        }else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if(qfront == rear){
            return -1;
        }else{
            return arr[qfront];
        }
    }
};

int main(){
    // create a queue
    // queue<int> q;

    // q.push(11);
    // cout<<"Front of queue is : "<<q.front()<<endl;

    // q.push(15);
    // cout<<"Front of queue is : "<<q.front()<<endl;

    // q.push(13);
    // cout<<"Front of queue is : "<<q.front()<<endl;

    // cout<<"Size of queue is : "<<q.size()<<endl;

    // q.pop();
    // q.pop();
    // q.pop();
    // cout<<"Size of queue is : "<<q.size()<<endl;

    // if(q.empty()){
    //     cout<<"Queue is empty"<<endl;
    // }else{
    //     cout<<"Queue is not empty"<<endl;
    // }

    Queue q;

    q.enqueue(17);
    q.enqueue(23);
    q.enqueue(11);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}