#include <iostream>
using namespace std;

class Gregarious
{
	public:
		virtual void talk(){ cout << "Gregarious say hi!"<<endl;}
};
class Shy: public Gregarious
{
	protected:
		virtual void talk(){ cout << "Shy reluctantly say hello!"<<endl;}
};
int main()
{
 //Shy myShy = new Shy();
 //myShy.talk();
 Shy myShy;
 Gregarious& ref = myShy;
 ref.talk();
 return 0;
}
