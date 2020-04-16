// passing parameters by reference
#include <iostream>
using namespace std;

//void duplicate (int& a, int& b, int& c)
//{
//  a*=2;
//  b*=2;
//  c*=2;
//}
void duplicate (int* a, int* b, int* c)
{
  *a*=2;
  *b*=2;
  *c*=2;
}
int main ()
{
  int x=1, y=3, z=7;
  int *xp, *yp, *zp;
  xp=&x;
  yp=&y;
  zp=&z;

  duplicate (xp, yp, zp);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return 0;
}