#include <iostream>

class Rectangle{
    private:
    float length;
    float width;

    public:
    //default constructor
    Rectangle(); 
    //overloaded constructor
    Rectangle(float l,float w);
    // accessor methods
    void setLength(float l);
    void setWidth(float w);
    float getLength();
    float getWidth();

    float calculateArea();
    //destructor
    ~Rectangle();
};