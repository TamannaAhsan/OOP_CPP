#ifndef TEMPCALCULATOR_H_INCLUDED
#define TEMPCALCULATOR_H_INCLUDED

template<class T>
class TempCalculator{

private:
    T num1;
    T num2;
    T result;

public:
    TempCalculator();
    T Addition(T,T);
    T Subtraction(T,T);
    T Multiplication(T,T);
    T Division(T,T);
};


#endif // TEMPCALCULATOR_H_INCLUDED
