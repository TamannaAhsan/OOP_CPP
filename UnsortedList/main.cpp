#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include <iostream>

using namespace std;

int main()
{
    UnsortedType<int>list;
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);
    for(int i=0; i<list.LengthIs(); i++){
        int x;
        list.GetNextItem(x);
        cout<<x<<" ";
    }
    list.ResetList();

    cout<<endl;
    cout<<"Length is: "<<list.LengthIs()<<endl;

    list.InsertItem(1);
     for(int i=0; i<list.LengthIs(); i++){
        int x;
        list.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<endl;

    int x=4;
    bool found=false;
    list.RetriveItem(x,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is found"<<endl;
    }

    int y=5;
    list.RetriveItem(y,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is found"<<endl;
    }

    int z=9;
    list.RetriveItem(z,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is found"<<endl;
    }

    int a=10;
    list.RetriveItem(a,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is found"<<endl;
    }

    if(list.IsFull()){
        cout<<"List is full"<<endl;
    }
    else{
        cout<<"List is not full"<<endl;
    }
    list.DeleteItem(5);
    list.ResetList();

    if(list.IsFull()){
        cout<<"List is full"<<endl;
    }
    else{
        cout<<"List is not full"<<endl;
    }

    list.DeleteItem(1);
    list.ResetList();
    
    if(list.IsFull()){
        cout<<"List is full"<<endl;
    }
    else{
        cout<<"List is not full"<<endl;
    }
}
