#ifndef _SELECTIONSORT_H_
#define _SELECTIONSORT_H_

#include <vector>

#include "utils.h"


namespace SelectionSort {
  template<typename T>
  void sort(std::vector<T>& v, bool (*compare) (T*, T*))
  {
    int min;

    for(int i = 0; i < v.size() - 1; i++)
    {
      min = i;

      for(int j = i + 1; j < v.size(); j++)
      {
        if (!compare(&v[j], &v[min]))
          min = j;
      }

      if(min != i)
        swap(v, i, min);
    }
  }
};

#endif
