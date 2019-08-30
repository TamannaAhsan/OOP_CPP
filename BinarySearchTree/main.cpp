#include <iostream>
#include"BinarySearchTree.cpp"
#define SIZE 10
using namespace std;

int main()
{
    int arr[SIZE]={4,9,2,7,3,11,17,0,5,1};

    TreeType<int>myTree;
    if(myTree.IsEmpty()){
        cout<<"Tree is Empty"<<endl;
    }
    else{
        cout<<"Tree is not Empty"<<endl;
    }
    for(int i=0; i<SIZE; i++){
        myTree.InsertItem(arr[i]);
    }

    if(myTree.IsEmpty()){
        cout<<"Tree is Empty"<<endl;
    }
    else{
        cout<<"Tree is not Empty"<<endl;
    }
    cout<<myTree.LengthIs()<<endl;

    int x=9;
    bool found=false;
    myTree.RetrieveItem(x,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }

    x=13;
    found=false;
    myTree.RetrieveItem(x,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }

    OrderType ord;
    QueType<int>que;
    myTree.ResetTree(ord);



}
