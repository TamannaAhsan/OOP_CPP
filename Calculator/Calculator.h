#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

class Calculator{
private:
    int num1;
    int num2;
    int result;

public:
    Calculator();
    int Addition(int,int);
    int Subtraction(int,int);
    int Multiplication(int,int);
    int Division(int,int);
};


#endif // CALCULATOR_H_INCLUDED
