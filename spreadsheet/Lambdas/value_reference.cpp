#include <iostream>

using namespace std;

class Temp
{
 private:
  const int x;
  int& y;
 public:
  Temp(int xx, int& yy):x(xx), y(yy){}
  void operator()()
  { cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    y++;}
};

int main()
{


 int x=0;
 int y=42;
 Temp ff(x,y);
 x=y=77;
 ff();
 ff();
 
 int w=0;
 int v=45;
 int s=1;
 auto kk=[=, &v ]() mutable
 {
	 cout<<"s: "<<s<<endl;
	 cout<<"v: "<<v<<endl;
	 cout<<"w: "<<w<<endl;
	 w++;
	 v++;
 };
 kk();
 kk();
 return 0;
}