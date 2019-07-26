#include"QueType.h"
#include"QueType.cpp"
#include <iostream>

using namespace std;

int main()
{
    QueType<int>list =QueType<int>(5);

    if(list.IsEmpty()){
       cout<<"Queue is Empty"<<endl;
    }
    else{
       cout<<"Queue is not Empty"<<endl;
    }

    list.Enqueue(5);
    list.Enqueue(7);
    list.Enqueue(4);
    list.Enqueue(2);

    if(list.IsEmpty()){
       cout<<"Queue is Empty"<<endl;
    }
    else{
       cout<<"Queue is not Empty"<<endl;
    }
    if(list.IsFull()){
       cout<<"Queue is Full"<<endl;
    }

    else{
       cout<<"Queue is not Full"<<endl;
    }

    list.Enqueue(6);
    QueType<int>templist = list;

    for(int i=0; i<5; i++){
        int x;
        templist.Dequeue(x);
        cout<<x<<" ";
    }

    cout<<endl;
    if(list.IsFull()){
       cout<<"Queue is Full"<<endl;
    }

    else{
       cout<<"Queue is not Full"<<endl;
    }

   // list.Enqueue(8);
   int x;
   list.Dequeue(x);
   list.Dequeue(x);

   templist=list;
    for(int i=0; i<3; i++){
        int x;
        templist.Dequeue(x);
        cout<<x<<" ";
    }

    list.Dequeue(x);
    list.Dequeue(x);
    list.Dequeue(x);

    cout<<endl;

    if(list.IsEmpty()){
       cout<<"Queue is Empty"<<endl;
    }

    else{
       cout<<"Queue is not Empty"<<endl;
    }
    //list.Dequeue(x);
}
