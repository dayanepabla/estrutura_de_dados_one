#include <iostream>
#include <cstring>

#include "utils.h"
#include "rectangle.h"
#include "bubble-sort.h"
#include "quick-sort.h"
#include "selection-sort.h"
#include "insertion-sort.h"


bool compare(int* a, int* b) { return *a > *b; }
bool rectangle_compare(Rectangle* a, Rectangle* b) { return a < b; }


int main(int argc, char **argv)
{
  if(argc < 2)
    usage();

  // std::vector<int> v;
  std::vector<Rectangle> v;

  // v.push_back(3);
  // v.push_back(2);
  // v.push_back(1);
  v.push_back(Rectangle(10, 10));
  v.push_back(Rectangle(9,9));

  std::cout << "before sorting: ";

  // v_print(v);
  v_rectangle_print(v);

  if(std::strcmp(argv[1], "selection") == 0)
    // SelectionSort::sort(v, compare);
    SelectionSort::sort(v, rectangle_compare);
  else if(std::strcmp(argv[1], "insertion") == 0)
    // InsertionSort::sort(v, compare);
    InsertionSort::sort(v, rectangle_compare);
  else if(std::strcmp(argv[1], "bubble") == 0)
    // BubbleSort::sort(v, compare);
    BubbleSort::sort(v, rectangle_compare);
  else if(std::strcmp(argv[1], "quicksort") == 0)
    // QuickSort::sort(v, compare);
    QuickSort::sort(v, rectangle_compare);
  else
    std::cout << "algorithm not implemented!" << std::endl;

  std::cout << "after sorting: ";

  // v_print(v);
  v_rectangle_print(v);

  return 0;
}
