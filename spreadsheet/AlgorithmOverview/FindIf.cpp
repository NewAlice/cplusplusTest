#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
bool perfectScore(int num)
{
	return (num >= 100);
}
int main(){
	int num;
	vector<int> myVector;
	while(true)
	{
		cout<<"Enter a number to add (0 to stop):";
		cin>>num;
		if( 0==num ){
			break;
		}
		myVector.push_back(num);
	}
	auto end=myVector.end();
	auto it = find_if(myVector.begin(), end, perfectScore);
	//auto it = find_if(myVector.begin(), end, [](int i)(return i>=100));//lambda
	if (it == end){
		cout <<"No perfect scores"<<endl;
	}else{
		cout<<"Found a \"perfect\" score of "<<*it<<endl;
	}
	return 0;
}