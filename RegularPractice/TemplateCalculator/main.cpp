#include "TempCalculator.h"
#include"TempCalculator.cpp"
#include <iostream>
using namespace std;

int main()
{
    TempCalculator<int>Math1;
    cout<<"Addition is: "<<Math1.Addition(100,60)<<endl;
    cout<<"Subtraction is: "<<Math1.Subtraction(150,50)<<endl;
    cout<<"Multiplication is: "<<Math1.Multiplication(10,9)<<endl;
    cout<<"Division is: "<<Math1.Division(100,5)<<endl;

    cout<<endl;

     TempCalculator<float>Math2;
    cout<<"Addition is: "<<Math2.Addition(150.0,65.8)<<endl;
    cout<<"Subtraction is: "<<Math2.Subtraction(158.0,40.8)<<endl;
    cout<<"Multiplication is: "<<Math2.Multiplication(20.5,9.2)<<endl;
    cout<<"Division is: "<<Math2.Division(100.2,4.8)<<endl;
}

