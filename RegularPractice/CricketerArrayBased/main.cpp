#include "Cricketer.h"
#include "Cricketer.cpp"
#include <iostream>
using namespace std;

int main(){

    int arr[SIZE]={18, 25, 39, 47,59, 64, 70, 86 , 97,0};
    Cricketer player(3, "Atif", arr);
    cout<<"Average: "<<player.findAverage()<<endl;
    cout<<"Max: "<<player.findMax()<<endl;
    cout<<"Min: "<<player.findMin()<<endl;
    cout<<"Total: "<<player.findTotal()<<endl;
}
