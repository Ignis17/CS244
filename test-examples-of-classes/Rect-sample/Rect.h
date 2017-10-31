#ifndef RECT_H
#define RECT_H

class Rect
{
  private:
    double width;
    double length;
  public:
    Rect(double w, double len)    // Constructor
    {
      width = w;
      length = len;
    }

    double getWitdh() const
    {return width;}
    double getLength() const
    {return length;}
    double getArea()const
    {return width * length;}
};
#endif
