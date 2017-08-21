#include <iostream>
using namespace std;

int addFrom1ToN_Iterative(int n)
{
	return n<=0?0:n+addFrom1ToN_Iterative(n-1);
}
int main()
{

 int j=10;
 int i=5000;
 int sumi=addFrom1ToN_Iterative(i);
 int sumj=addFrom1ToN_Iterative(j); 
 cout<<"sumi is"<<sumi<<endl;
 cout<<"sumj is"<<sumj<<endl;
 }