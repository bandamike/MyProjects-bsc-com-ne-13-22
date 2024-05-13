
#include <iostream>
#include "rectangle.h"

int main(){
    Rectangle rect1;
    float Length,Width;
    std::cout<<"Enter the length: \n";
    std::cin>>Length;
    std::cout<<"Enter the width: \n";
    std::cin>>Width;
    rect1.setLength(Length);
    rect1.setWidth(Width);
    float Area = Length*Width;
    std::cout<<"Area of rectangle 1: "<<Area;
    return 0;
}