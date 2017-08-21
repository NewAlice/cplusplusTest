#include <iostream>
using namespace std;

class Super
{
 public:
	Super();
	~Super();
};
class Sub : public Super
{
 public:
	sub() {mString = new char[30];}
	virtual ~Sub() { delete[] mString;}
 protectd:
	char* mString;
	
};
int main()
{
 Super* ptr = new Sub(); // mString is allocated here
 delete ptr;//~Super is called, but not ~Sub because the destructor is not virtual
 return 0;
}