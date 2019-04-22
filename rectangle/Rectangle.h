#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
  public:
      //Constructors
      Rectangle();
      Rectangle(double init_width,
                double init_length);
      Rectangle(double init_side);

      //Methods
      void print_rectangle();
private:
      double width, length;

};

#endif // RECTANGLE_H
