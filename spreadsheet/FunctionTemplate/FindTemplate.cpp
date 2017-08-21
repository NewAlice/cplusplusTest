#include <iostream>
//#include "SpreadsheetCell.h"
using namespace std;

static const size_t NOT_FOUND = (size_t)(-1);
template <typename T>
size_t Find(T& value, T* arr, size_t size)
{
	for(size_t i=0; i<size; i++){
		if(value == arr[i]){
			return i;
		}
	}
	return NOT_FOUND;
}

int main(){
	int x = 3, intArr[] = {1,2,3,4};
	size_t sizeIntArr = sizeof(intArr)/sizeof(int);
	size_t res;
	res = Find(x, intArr, sizeIntArr);
	if(res != NOT_FOUND)
		cout <<res << endl;
	else
		cout<<"Not found"<<endl;
	
	double d1 = 5.6, dArr[] = {1.2, 3.4, 5.7, 7.5};
	size_t sizeDoubleArr = sizeof(dArr) / sizeof(double);
	res = Find(d1, dArr, sizeDoubleArr);
	res = Find<double>(d1, dArr, sizeDoubleArr);
	if(res !=NOT_FOUND)
		cout<< res <<endl;
	else
		cout<<"Not found"<<endl;
    /****	
	SpreadsheetCell c1(10), c2Arr[2] = {SpreadsheetCell(4), SpreadsheetCell(10)};
	size_t sizeC2Arr = sizeof(c2Arr) / sizeof(SpreadsheetCell);
	res = Find(c1, c2Arr, sizeC2Arr);
	res = Find<SpreadsheetCell>(c1, c2Arr, sizeC2Arr);
	***/
	
}

