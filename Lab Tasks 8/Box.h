#pragma once

#include <iostream>
using namespace std;


class Box{
public:
  

    Box();

    Box(const double newLength, const double newBreadth, const double newHeight);


    ~Box();

    double GetVolume();
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);


    //Overload + operator to add two Box objects.
    Box operator+(const Box& b);



private:
    double length; // length of a box
    double breadth; // breadth of a box
    double height; // height of a box

};