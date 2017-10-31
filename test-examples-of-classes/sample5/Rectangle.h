#ifndef RECTANGLE_H
#define RECTANGLE_H

// Rectangle class declaration.
class Rectangle
{
  private:
    double width;
    double length;
  public:
    void setWidth(double w)
    { width = w;}
    void setLength(double  len)
    {length = len;}
    double getWidth() const
    {return width;}
    double getLength() const
    {return length;}
    double getArea() const
    {return width * length;}
};
#endif
