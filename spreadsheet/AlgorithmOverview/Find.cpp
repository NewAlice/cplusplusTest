#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

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
	while(true){
		cout<<"Enter a number to lookup (0 to stop)";
		cin >> num;
		if (0 == num)
		{
			break;
		}
		auto end=myVector.end();
		auto it = find(myVector.begin(), end, num);
		if (it == end){
			cout <<"Could not find" << num <<endl;
		}else{
			cout<<"Found "<<*it<<endl;
		}
			
	}
	return 0;
}