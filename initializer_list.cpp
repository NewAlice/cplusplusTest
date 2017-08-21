#include <iostream>
#include <string>
#include <initializer_list>
//#include "UnitTest++.h"

using namespace std;
void print(initializer_list<int> vals)
{
	for(auto p=vals.begin(); p!=vals.end(); p++)
	{
		std::cout<<*p<<std::endl;
	}
}

int main()
{
	print({32,6,1,0,66});
  //  return UnitTest::RunAllTests();

}
