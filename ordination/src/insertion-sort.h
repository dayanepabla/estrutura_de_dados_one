#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_

#include <vector>


namespace InsertionSort {
  template<typename T>
  void sort(std::vector<T>& v, bool (*compare) (T*, T*))
  {
    int j;

    for (int i = 0; i < v.size(); ++i)
    {
      j = i;

      while(j > 0 && compare(&v[j - 1], &v[j]))
      {
        swap(v, j, j - 1);
        j--;
      }
    }
  }
}


#endif
