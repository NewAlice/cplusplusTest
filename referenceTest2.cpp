#include <iostream>   

using namespace std; 

int & plusplus(int &i) 
{ 
    ++i; 
    return i; 
} 

int main(int argc, char *argv[]) 
{ 
    int i = 10;	
	int w=10;
	auto j = plusplus(i);
    int k=  plusplus(w); 
	//int& j = plusplus(i); 
    ++j; 
	++k;
    cout<<"i="<<i<<"j="<<j<<"k="<<k<<endl; 
    return 0; 
}

