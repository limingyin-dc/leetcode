#include <vector>
class MyCircularQueue {
public:
    vector<int>q;
    int count;
    int front;
    int rear;
    int mark;
    MyCircularQueue(int k) {
        count = k;
        front = 0;
        rear = 0;
        vector<int>s(k);
        q = s;
        mark = 0;
    }
    
    bool enQueue(int value) {
        if(mark == 1 && rear == front){
            return false;
        }
        else{
            q[front] = value;
            front = (front + 1) % count;
            mark = 1;
            return true;
        }
    }
    
    bool deQueue() {
        if(rear == front && mark == 0){
            return false;
        }
        else{
            mark = 0;
            rear = (rear + 1) % count;
            return true;
        }
    }
    
    int Front() {
        if(front == rear && mark == 0){
            return -1;
        }
        else{
           return q[rear]; 
        }
    }
    
    int Rear() {
        if(front == rear && mark == 0){
            return -1;
        }
        return q[(front - 1 + count) % count];
    }
    
    bool isEmpty() {
        if(rear == front && mark == 0){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(rear == front && mark == 1){
            return true;
        }
        return false;
    }
};
