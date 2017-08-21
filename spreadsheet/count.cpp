#include <iostream>

using namespace std;
int main()
{
 double totalNum, firstPayment;
 totalNum=22*86/10;
 cout<<totalNum<<endl;
 if(totalNum>150){
  firstPayment=(totalNum-150)*35/100+30;
 }
 else{
 firstPayment=totalNum*20/100;
 }
 cout<<firstPayment<<endl;
}