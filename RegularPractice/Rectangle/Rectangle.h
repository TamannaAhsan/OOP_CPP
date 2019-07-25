#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle{
private:
    float length;
    float width;

public:
    Rectangle();
    float area(float,float);
    float circumference(float,float);
    void setValue(float,float);
    float getLength(float);
    float getWidth(float);
    float compare(float,float);
};



#endif // RECTANGLE_H_INCLUDED
