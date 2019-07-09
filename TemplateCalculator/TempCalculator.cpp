#include "TempCalculator.h"
#include "TempCalculator.h"
#include<iostream>
using namespace std;

template<class T>
TempCalculator<T>::TempCalculator(){
   num1=0;
   num2=0;
}

template<class T>
T TempCalculator<T>::Addition(T a, T b){
    return result=a+b;
}

template<class T>
T TempCalculator<T>::Subtraction(T a, T b){
    return result=a-b;
}

template<class T>
T TempCalculator<T>::Multiplication(T a, T b){
    return result=a*b;
}

template<class T>
T TempCalculator<T>::Division(T a, T b){
    if(a>b){
    return result=a/b;
    }
}
