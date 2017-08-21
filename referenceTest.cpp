#include <iostream>
using namespace std;

int main()
{
  int x = 3, y = 4, z = 5;
  int& xRef = x;
  xRef = 10;
  cout<<x<<endl;
  //2
  int w =3;
  int& wRef = w;
  int* wPtr = &wRef;//Address of a reference is pointer to value
  *wPtr = 100;
  cout<<w<<endl;
  //cout<<(wPtr==wRef)<<endl;//can't compile
  cout<<(wPtr==&wRef)<<endl;
  cout<<(wPtr==&w)<<endl;
 }