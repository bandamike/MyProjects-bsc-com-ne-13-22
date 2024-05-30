   #include <iostream>
    #include "area.h"
    #include "shapes.h"
    float shapes;
    static float Area;

    float Area::SquareArea(shapes::Square square){
        return square.getLength()*square.getLength();
    }
    float Area::TriangleArea(shapes::Triangle triangle){
        return 0.5*triangle.getBase()*triangle.getHeight();
    }
    
    float Area::CircleArea(shapes::Circle circle){
        return 3.14159265359*circle.getRadius()*circle.getRadius();
    }