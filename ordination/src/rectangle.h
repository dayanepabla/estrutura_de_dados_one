#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

class Rectangle {
  public:
    Rectangle(int a, int b);

    int area() const;

    bool operator>(Rectangle* rect);
    bool operator<(Rectangle* rect);

  private:
    int a, b;
};

#endif
