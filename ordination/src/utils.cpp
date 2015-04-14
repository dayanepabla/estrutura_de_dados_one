#include "utils.h"


void usage()
{
  std::cout << "Usage: sorting <algorithm>" << std::endl;
  std::exit(EXIT_FAILURE);
}

void v_rectangle_print(std::vector<Rectangle>& v)
{
  std::vector<Rectangle>::const_iterator i;

  std::cout << "[ ";

  for(i = v.begin(); i != v.end(); ++i)
  {
    std::cout << i->area() << " ";
  }

  std::cout << "]" << std::endl;
}
