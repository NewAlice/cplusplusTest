#include <numerric>
#include <vector>

using namespace std;

double arithmeticMean(const vector<int>& nums)
{
	double sum = accumulate(nums.begin(), nums.end(), 0);
	return sum / nums.size();
}

int product(int num1, int num2)
{
	return num1*num2;
}

double geometricMean(const vector<int>& nums)
{
	double mult = accumulate(nums.begin(), nums.end(), 1, product);
	//double mult = accumulate(nums.begin(), nums.end(), 1, [](int num1, int num2){return num1*num2;}); // lambda
	return pow(mult, 1.0 / nums.size());
}