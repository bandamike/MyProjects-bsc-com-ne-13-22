#include <iostream>
#include "rectangle.h"
using namespace std;

int main(){
    Rectangle rect;
    float length,width;

    cout <<"Enter the length for rect1: "<<endl;
    cin>>length;
    cout <<"Enter the width for rect1: "<<endl;
    cin>>width;
    rect.setLength(length);
    rect.setWidth(width);
    cout <<"Area of rectangle: "<<rect.calculateArea()<<endl;
     
     return 0;
}