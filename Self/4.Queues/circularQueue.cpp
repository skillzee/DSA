#include<iostream>

using namespace std;

class CircularQueue{
    int *arr;
    int qfront;
    int rear;
    int size;

    public:
    CircularQueue(int n){
        size = 1000;
        arr = new int[size];
        qfront = rear =-1;
    }

    bool enque(int val){
        if( (qfront == 0 and rear ==size-1 ) || (rear == (qfront-1)% (size-1))){
            cout<<"Queue is full";
            return false;
        }
        else if(qfront == -1){
            qfront = rear = 0;

            

        }
        else if(rear == size-1 and qfront!=0){
           
                rear = 0;
                
            
        }
        else{
            rear++;
            
        }
        arr[rear] = val;
    }


    int deque(){
        if(qfront == -1){
            cout<<"Queue is empty";
            return -1;
        }
        int ans = arr[qfront];

        if(qfront == rear)
    }

};

int main()
{
     
    return 0;
}