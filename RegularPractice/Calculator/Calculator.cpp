#include "Calculator.h"
#include<iostream>
using namespace std;

Calculator::Calculator(){
   num1=0;
   num2=0;
}

int Calculator::Addition(int a, int b){
    return result=a+b;
}

int Calculator::Subtraction(int a, int b){
    return result=a-b;
}

int Calculator::Multiplication(int a, int b){
    return result=a*b;
}

int Calculator::Division(int a, int b){
    if(a>b){
    return result=a/b;
    }
}
