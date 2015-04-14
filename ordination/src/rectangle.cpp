#include "rectangle.h"


Rectangle::Rectangle(int a, int b) : a(a), b(b) { }

int Rectangle::area() const
{
  return this->a * this->b;
}

bool Rectangle::operator>(Rectangle* rect)
{
  return this->area() > rect->area();
}

bool Rectangle::operator<(Rectangle* rect)
{
  return this->area() < rect->area();
}
