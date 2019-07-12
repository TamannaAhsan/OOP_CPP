#include"SortedType.h"
#include"SortedType.cpp"
#include <iostream>

using namespace std;

int main()
{
    SortedType<int>list;
    cout<<"Length is: "<<list.LengthIs()<<endl;

    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(4);
    list.InsertItem(2);
    list.InsertItem(1);

    int x;
    for(int i=0; i<list.LengthIs(); i++){
        list.GetNextItem(x);
        cout<<x<<" ";
    }

    cout<<endl;
    int u=6;
    bool found=false;
    list.RetrieveItem(u,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }

    int y=5;
    list.RetrieveItem(y,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }

    if(list.IsFull()){
        cout<<"List is full"<<endl;
    }
    else{
        cout<<"List is not full"<<endl;
    }

    list.DeleteItem(1);
    list.ResetList();

    int z;
    for(int i=0; i<list.LengthIs(); i++){
        list.GetNextItem(z);
        cout<<z<<" ";
    }

    cout<<endl;

    if(list.IsFull()){
        cout<<"List is full"<<endl;
    }
    else{
        cout<<"List is not full"<<endl;
    }
}
