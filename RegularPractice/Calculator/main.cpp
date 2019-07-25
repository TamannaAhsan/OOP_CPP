#include "Calculator.h"
#include"Calculator.cpp"
#include <iostream>
using namespace std;

int main()
{
    Calculator Math1;
    cout<<"Addition is: "<<Math1.Addition(100,60)<<endl;
    cout<<"Subtraction is: "<<Math1.Subtraction(150,50)<<endl;
    cout<<"Multiplication is: "<<Math1.Multiplication(10,9)<<endl;
    cout<<"Division is: "<<Math1.Division(100,5)<<endl;

    cout<<endl;

     Calculator Math2;
    cout<<"Addition is: "<<Math2.Addition(150,65)<<endl;
    cout<<"Subtraction is: "<<Math2.Subtraction(158,40)<<endl;
    cout<<"Multiplication is: "<<Math2.Multiplication(20,9)<<endl;
    cout<<"Division is: "<<Math2.Division(100,4)<<endl;
}
