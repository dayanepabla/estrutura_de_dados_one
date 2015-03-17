#ifndef _UTILS_H_
#define _UTILS_H_

#include <vector>
#include <iostream>


void usage();

template<typename T>
void swap(std::vector<T>& v, int a, int b)
{
  T aux = v[a];

  v[a] = v[b];
  v[b] = aux;
}

template<typename T>
void v_print(std::vector<T>& v)
{
  typename
  std::vector<T>::const_iterator i;

  std::cout << "[ ";

  for(i = v.begin(); i != v.end(); ++i)
  {
    std::cout << *i << " ";
  }

  std::cout << "]" << std::endl;
}

#endif
