#include <iostream>
using namespace std;
void refcall(int& t){++t;}

int main()
{
 int* ptr = nullptr;
 refcall(*ptr);
 return 0;
}