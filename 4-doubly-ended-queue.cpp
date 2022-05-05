#include<iostream>
using namespace std;
class DEque{
    public:
    int * arr,front,rear,size;
    DEque(int s)
    {
        this->size = s;
        arr = new int[size];
        front = -1, rear = 0;
    }
    bool isFull()
    {
        if((front==0 && rear==size-1)&&(rear == (front-1)%(size-1))&&(front!=0))
        {
            return 1;
        }
        return 0;
    }
    
    void insertF(int value)
    {
        if(isFull())
        {
            cout<<"Q is full"<<endl;
        }
        if(front==-1)
        {
            front =rear = 0;
        }
        else if(front==0 && rear!=size-1)
        {
            front = size-1;
        }
        else
        {
            front--;
        }
        arr[front] = value;
    }
    void insertR(int value)
    {
        if(isFull())
        {
            cout<<"Q is full"<<endl;
        }
        if(front==-1)
        {
            front = rear = 0;
        }
        else if(rear == size-1 && front!=0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = value;
    }
    int deleteF()
    {
        if (front == -1)
        {
            printf("\nQueue is Empty");
            return -1;
        }

        int k = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
            front = 0;
        else
            front++;

        return k;
    }
    int deleteR()
    {
        if (front == -1)
        {
            printf("\nQueue is Empty");
            return -1;
        }

        int k = arr[rear];
        arr[rear] = -1;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (rear==0)
            rear = size-1;
        else
            rear--;

        return k;
    }
    int getFront()
    {
       if(!isFull())
       {
           return -1;
       } 
       else
       {
           return arr[front];
       }
    }
    int getRear()
    {
        if(!isFull())
       {
           return -1;
       } 
       else
       {
           return arr[rear];
       }
    }
};
int main(){

return 0;
}