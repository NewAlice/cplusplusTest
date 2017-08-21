#include <iostream>
using namespace std;

class Super
{
	public:
	    void go(){cout <<"go() called on Super"<<endl;}
		//void virtual go(){cout <<"go() called on Super"<<endl;}
};
class Sub:public Super
{
 public:
 void go(){ cout << "go() called on Sub"<<endl;}
};

int main()
{
 //Sub mySub;
 //mySub.go();
 Sub mySub;
 Super& ref = mySub;
 ref.go();
 return 0;
}
