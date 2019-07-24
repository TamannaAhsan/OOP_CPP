#include"StackType.h"
#include"StackType.cpp"
#include <iostream>
using namespace std;

int main()
{
    
    StackType<int>myStack;
    if(myStack.IsEmpty()){
        cout<<"Stack is Empty"<<endl;
    }

    myStack.Push(5);
    myStack.Push(7);
    myStack.Push(4);
    myStack.Push(2);
     if(myStack.IsEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }

    if(myStack.IsFull()){
        cout<<"Stack is Full"<<endl;
    }
    else{
        cout<<"Stack is not Full"<<endl;
    }
    StackType<int>myTempStack1=myStack;
    StackType<int>myTempStack2;

    for(int i=0; i<4; i++){
        myTempStack2.Push(myTempStack1.Top());
        myTempStack1.Pop();
    }
    for(int i=0; i<4; i++){
        cout<<myTempStack2.Top()<<" ";
        myTempStack2.Pop();
    }
    cout<<endl;
    myStack.Push(3);
    myTempStack1=myStack;
        for(int i=0; i<5; i++){
        myTempStack2.Push(myTempStack1.Top());
        myTempStack1.Pop();
    }
    for(int i=0; i<5; i++){
        cout<<myTempStack2.Top()<<" ";
        myTempStack2.Pop();
    }
    cout<<endl;
     if(myStack.IsFull()){
        cout<<"Stack is Full"<<endl;
    }
    else{
        cout<<"Stack is not Full"<<endl;
    }
    myStack.Pop();
    myStack.Pop();
    cout<<myStack.Top()<<endl;

    string a;
    cin>>a;
    cout<<a<<endl;

    StackType<char>charStack;
    for(int i=0; i<a.size(); i++){
        if(charStack.IsEmpty())
            charStack.Push(a[i]);
        else if(charStack.Top()=='(' && a[i]==')')
                charStack.Pop();
        else if(charStack.Top()=='(' && a[i]=='(')
            charStack.Push(a[i]);

        else if(charStack.Top()==')' && a[i]=='(')
            charStack.Pop();
        else if(charStack.Top()==')' && a[i]==')')
            charStack.Push(a[i]);

    }
    if(charStack.IsEmpty()){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"NotBalanced"<<endl;
    }
}
