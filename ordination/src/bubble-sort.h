#ifndef _BUBBLESORT_H_
#define _BUBBLESORT_H_

#include <vector>


namespace BubbleSort {
  template<typename T>
  void sort(std::vector<T>& v, bool (*compare) (T*, T*))
  {
    for (int m = v.size(); m >= 0; --m)
    {
      for (int i = 0; i < m - 1; ++i)
      {
        if (compare(&v[i], &v[i + 1]))
          swap(v, i, i + 1);
      }
    }
  }
}


#endif
