#include <iostream>
using namespace std;
class qu{
    public:
    int * arr,size,front,rear;

    qu(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0, rear = 0;
    }
    ~qu()
    {
        delete [] arr;
    }
    void enqueue(int element)
    {
        if(rear ==size)
        {
            cout<<"Queue is full!!!"<<endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
            cout<<element<<" has been enqueued"<<endl;
        }
    }
    void dequeue()
    {
       if(front==rear)
       {
           cout<<"queue is empty!"<<endl;
       } 
       else
       {
           int ans = arr[front];
           arr[front] = -1; //front is now empty with value -1;
           front++;
           if(front==rear)
           {
               front = 0;
               rear = 0;
           }
        //    return ans;
        cout<<ans <<" has been poped up!!"<<endl;
       }
    }
    int fronte()
    {
        if(front==rear)
        {
            return -1;
        }
        else
        {
           return  arr[front];
        }
    }
    bool isEmpty()
    {
        if(front==rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
   void display()
    {
        if(front==rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
            
        }
    }
};
int main()
{           
    qu q(5);
    q.enqueue(3);
    q.enqueue(6);
    q.enqueue(9);
    q.enqueue(12);
    q.enqueue(15);

    q.display();
    return 0;
}                           