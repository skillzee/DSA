#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;

    public:
    Queue(){
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enque(int data){
        if(rear == size){
            cout<<"Queue is full";
        }
        else{
            arr[rear] = data;
            rear++;
        }
        
    }
    
    int dequeue(){
        if(qfront == rear){
            return -1;
        }
        else{
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

    int front(){
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

    bool empty(){
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }


};

int main()
{
    Queue q;
    q.enque(3);
    q.enque(4);
    q.enque(5);
    q.enque(6);
    q.enque(7);
    q.enque(8);
    // q.dequeue();
    cout<<q.front()<<endl;;

     
    return 0;
}