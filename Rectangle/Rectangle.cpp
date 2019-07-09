#include"Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(){
    length=0.0;
    width=0.0;
}
float Rectangle::area(float l,float w){
    return l*w;
}
float Rectangle::circumference(float l,float w){
    return 2*(l+w);
}
void Rectangle::setValue(float l, float w){
    length=l;
    width=w;
}
float Rectangle::getLength(float l){
    return l;
}
float Rectangle::getWidth(float w){
    return w;
}
float Rectangle::compare(Rectangle rectangle){
    return this->area()>rectangle.area();
}
