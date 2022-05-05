#include<iostream>
#include<queue>
using namespace std;

int main(){
//create a queue
queue<int>q;
q.push(11); //here front is 1st element always
cout<<"Front of queue is "<<q.front()<<endl;
q.push(13);

cout<<"size of queue is "<<q.size()<<endl;
q.pop();
cout<<"size of queue is "<<q.size()<<endl;

if(q.empty())
{
    cout<<"Queue is empty!!"<<endl;
}
else{
    cout<<"Queue is not empty!!"<<endl;
}

return 0;
}