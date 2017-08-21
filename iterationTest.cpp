#include <iostream>
using namespace std;

int addFrom1ToN_Iterative(int n)
{
	int result=0;
	for(int i=1; i<=n; i++)
		result+=i;
	return result;
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