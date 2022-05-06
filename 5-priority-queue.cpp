#include <iostream>
using namespace std;
class Pqueue
{
public:
    int value, priority;
};
int size = -1;
Pqueue arr[10000];
void enqueue(int value, int priority)
{
    size++; // increase size

    // inserting element
    arr[size].value = value;
    arr[size].priority = priority;
}

int peek()
{
    int hp = INT16_MIN; // HERE hp is highest priority
    int ind = -1;       // ind contains index of hp element

    for (int i = 0; i <= size; i++)
    {
        if ((hp == arr[i].priority) && (arr[ind].value < arr[i].value) && (ind > -1))
        {
            // hp = arr[i].priority;
            ind = i;
        }
        else if (hp < arr[i].priority)
        {
            hp = arr[i].priority;
            ind = i;
        }
    }
    return ind;
}
void dequeue()
{
    int ind = peek();
    for (int i = ind; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}
int main()
{

    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 3);

    int ind = peek();
    cout<<ind<<endl;
    cout << "Before dequeuing!!" << endl;
    cout << arr[ind].value << endl;
    dequeue();
    // ind = peek();
    // cout << "After dequeuing!!" << endl;
    // dequeue();

    // cout << arr[ind].value << endl;
    // ind = peek();
    // cout << "After dequeuing!!" << endl;
    // cout << arr[ind].value << endl;

    return 0;
}