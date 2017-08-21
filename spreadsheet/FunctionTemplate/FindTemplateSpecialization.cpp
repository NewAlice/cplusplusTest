#include <iostream>
#include <cstring>
using namespace std;

static const size_t NOT_FOUND = (size_t)(-1);
//template<>
//size_t Find(char*& value, char**arr, size_t size)
template <typename T>
size_t Find(T& value, T* arr, size_t size)
{
	return 0;
}
template <> 
size_t Find<char*>(char*& value, char** arr, size_t size)
{
	cout <<"Specialization"<<endl;
	for(size_t i=0; i<size; i++){
		if(strcmp(value, arr[i]) == 0){
			return i;
		}
	}
	return NOT_FOUND;
}

int main(){
	char* word = "two";
	char* arr[] = {"one", "two", "three", "four"};
	size_t sizeArr = sizeof(arr)/sizeof(arr[0]);
	size_t res;
	res = Find<char*>(word, arr, sizeArr);//Calls the char* specialization of the template
	res = Find(word, arr, sizeArr); // Calls the Find non-template function
	if(res != NOT_FOUND)
		cout <<res << endl;
	else
		cout<<"Not found"<<endl;
	return 0;
	
}

