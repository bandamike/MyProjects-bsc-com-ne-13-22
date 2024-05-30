
#include "shapes.h"
namespace shapes{
    Square::Square() : Length(0){}
    Square::Square(float Length) : Length(Length){}
    Square::~Square(){}
    float Square::getLength(){
        return Length;
    }
    void Square::setLength(float setLength){
        this->Length=Length;
    }
    Triangle::Triangle() : Base(0), Height(0){} 
    Triangle::Triangle(float Base,float Height) :Base(Base),Height(Height){}
    Triangle::~Triangle(){}
    float Triangle::getBase(){
        return Base;
    }
    void Triangle::setBase(float Base){
        this->Base=Base;
    }
      float Triangle ::getHeight(){
        return Height;
    }
    void Triangle::setHeight(float Height){
        this->Height=Height;}
    Circle::Circle() : radius(0){}
    Circle::Circle(float radius) :radius(radius){}
    Circle::~Circle(){}
    float Circle::getRadius(){
        return radius;
    }
    void Circle::setRadius(float radius){
        this->radius=radius;
    }
    }