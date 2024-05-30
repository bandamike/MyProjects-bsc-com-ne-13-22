
    #include<iostream>
    #include "shapes.h"
    #include "area.h"
    using namespace std;

    int main(){
        int Choice;
        while(true){
            cout <<"1. calculate the are of a Square\n";
            cout <<"2. clculate the area of a Triangle\n";
            cout <<"3. calculate the area of a Circle\n";
            cout<<"4. Quite\n";
            cout<<"Enter your Choice: ";
            cin>>Choice;
            switch(Choice){
                case 1:{
                    float Length;
                    cout<<"enter length of the square: ";
                    cin>>Length;
                    shapes::Square square(Length);
                    float area=Area::SquareArea(square);
                    cout<<"the area of the square is: " <<area<<endl;
                    break;
                }
                case 2:{
                    float Base,Height;
                    cout<<"enter the base of a triangle: ";
                    cin>>Base;
                    cout<<"enter the height of a triangle: ";
                    cin>>Height;
                    shapes::Triangle triangle(Base,Height);
                    float  area= Area::TriangleArea(triangle);
                    cout<<"the area of a triangle is: "<<area<<endl;
                    break;
                }
                case 3: {
                    float radius;
                    cout<<"enter the radius of the circle: ";
                    cin>>radius;
                    shapes::Circle circle(radius);
                    float area= Area::CircleArea(circle);
                    cout<<"the area of a circle is "<<area<<endl;
                    break;
                }
                case 4:{
                    return 0;
                }
                default: {
                    cout<<"invalid choice.Please try again."<<endl;
                }
            }
        }
        return 0;
} 