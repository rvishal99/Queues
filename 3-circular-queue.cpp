#include <iostream>
using namespace std;

class Queue
{
    // Initialize front and rear
public:
    int rear, front;

    // Circular Queue
    int size;
    int *arr;
    Queue(int s)
    {
        front = rear = -1;
        this->size = s;
        arr = new int[s];
    }

    // void enQueue(int value);
    // int deQueue();
    // void displayQueue();
    void enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) ||
            (rear == (front - 1) % (size - 1)))
        {
            printf("\nQueue is Full");
            return;
        }

        else if (front == -1) /* Insert First Element */
        {
            front = rear = 0;
            arr[rear] = value;
        }

        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }

        else
        {
            rear++;
            arr[rear] = value;
        }
    }
    int deQueue()
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
    void displayQueue()
    {
        if (front == -1)
        {
            // printf("\nQueue is Empty");
            cout<<"\nQueue is Empty"<<endl;
            return;
        }
        printf("\nElements in Circular Queue are: ");
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
        else
        {
            for (int i = front; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;

            for (int i = 0; i <= rear; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
    }
};
int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    //Comment
    q.displayQueue();
    return 0;
}
