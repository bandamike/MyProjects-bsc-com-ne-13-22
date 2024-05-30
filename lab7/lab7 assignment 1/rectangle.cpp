
#include "rectangle.h"

Rectangle::Rectangle() :Length(0.0),Width(0.0){}
Rectangle::Rectangle(float l,float w) :Length(l),Width(w){}
void Rectangle::setLength(float l){
    Length=l;
}
void Rectangle::setWidth(float w){
    Width=w;
}
float Rectangle::Area(){
    return Length*Width;
}
Rectangle::~Rectangle(){};
