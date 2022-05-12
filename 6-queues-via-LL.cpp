#include <iostream>
using namespace std;
class Qnode{
    public:
    int data;
    Qnode * next;

    Qnode(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
class Queue{
    public:
    Qnode *  front,*rear;

    Queue()
    {
        front = rear = NULL;
    }
    void enQueue(int x)
    {
        Qnode * temp = new Qnode(x);

        if(rear==NULL)
        {
            front = rear = temp;
            return ;
        }
        rear->next = temp;
        rear = temp;
    }
    void deQueue()
    {
        if(front==NULL)
        {
            return ;
        }
        Qnode * temp = front;
        front = front->next;

        if(front==NULL)
        {
            rear = NULL;
        }
        delete temp;
    }
};
int main()
{

    return 0;
}