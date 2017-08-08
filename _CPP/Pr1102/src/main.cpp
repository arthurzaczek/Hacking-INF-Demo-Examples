//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 11.2 on page 268
//  Testing a Vector class

#include <vector>
#include <iostream>
using namespace std;

#include "Vector.h"

int
main ()
{
  Vector <int> v;
  Vector <int> w (3);
//  Vector <double> x (4, 2.0);
  cout << "  v = " << v << endl;
  cout << ", w = " << w << endl;
//  cout << ", x = " << x << endl;
//  cin >> w;
//  cout << "w = " << w << endl;
}
