//
//  rectangle.h
//  CSS2A_C4_LAb
//
//  Created by Sonia Arteaga on 2/9/17.
//  Copyright © 2017 Sonia Arteaga. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h

class Rectangle
{
    public:
        double unit_width; // public variable
        double unit_length; // public variable
        Rectangle();
        Rectangle(double len, double wid);
        // setters
        void setLength(double len); // public methods
        void setWidth(double wid);
        // getters
        double getLength();
        double getWidth();
        double getArea();
        double getPerimeter();
    private:
        double width,
                length;
        double calculateUnitRectArea(); // private method
};
#endif /* rectangle_h */
