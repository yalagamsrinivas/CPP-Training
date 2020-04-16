// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
typedef struct
{
 int x;
 int y;
}T;


int main () {
  int myints[] = {32,71,12,45,26,80,53,33};
  std::vector<T> myvector;
  T t1,t2,t3,t4;
  t1.x=10;
  t1.y=11;
   t2.x=12;
  t2.y=13;
   t3.x=14;
  t3.y=15;
  t3.x=1;
  t3.y=2;
  myvector.push_back(t1);
    myvector.push_back(t2);
      myvector.push_back(t3);
     

  std::sort (myvector.begin(), myvector.begin()+2);           //(12 32 45 71)26 80 53 33

  myvector.push_back(t4);

  return 0;
}