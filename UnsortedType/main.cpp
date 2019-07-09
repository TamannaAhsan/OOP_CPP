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

    for(int i=0; i<4; i++){
        int x;
        list.GetNextItem(x);
        cout<<"Item no: "<<i+1<<"is"<<x<<endl;
    }
    cout<<"Length of the list: "<<list.LengthIs()<<endl;

    bool f=false;
    int x=4;
    list.RetriveItem(x,f);
    cout<<"4 is found"<<f<<endl;
    f=false;
    x=5;
    list.RetriveItem(x,f);
    cout<<"5 is found"<<f<<endl;
    f=false;
    x=9;
    list.RetriveItem(x,f);
    cout<<"9 is found"<<f<<endl;
    f=false;
    x=10;
    list.RetriveItem(x,f);
    cout<<"10 is found"<<f<<endl;

    cout<<"List full: "<<list.IsFull()<<endl;
    list.DeleteItem(5);
    cout<<"List full: "<<list.IsFull()<<endl;
    list.DeleteItem(1);

    list.Resetlist();

    for(int i=0; i<4; i++){
        int x;
        list.GetNextItem(x);
        cout<<"Item no: "<<i+1<<" is "<<x<<endl;
    }

}
