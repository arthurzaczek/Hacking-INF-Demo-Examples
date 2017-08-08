//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Problem 13.1, page 319
//  A min() function template

#include<iostream>
#include "Ratio.h"
using namespace std;

template < class T > T Min (T x, T y)
{
  return (x < y ? x : y);
}

int
main ()
{
  cout << "min(22,44) = " << Min (22, 44) << endl;
  cout << "min(66.66,33.33) = " << Min (66.66, 33.33) << endl;
  Ratio x (22, 7), y (314, 100);
  cout << "min(x,y) = " << Min (x, y) << endl;
}
