#include"Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle A,B;
    cout<<"Rectangle1 area is: "<<A.area(6.9,7.0)<<endl;
    cout<<"Rectangle1 circumference is: "<<A.circumference(6.9,7.0)<<endl;
    cout<<endl;
    cout<<"Rectangle2 area is: "<<B.area(5.9,9.8)<<endl;
    cout<<"Rectangle2 circumference is: "<<B.circumference(5.9,9.8)<<endl;
    cout<<endl;
    cout<<"Length is: "<<B.getLength(9.0)<<endl;
    cout<<"Width is: "<<B.getWidth(6.0)<<endl;

}
