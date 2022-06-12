#include <iostream>
using namespace std;

long long int n;

int sqrt(long long int n)
{
	long long int left = 0;
	long long int right = n;
	long long int mid = (left + right) / 2;

	while (right - left >= 0)
	{
		unsigned long long int result = mid * mid;
		if (result == n)
			return mid;
		else if (result < n)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
		mid = (left + right) / 2;
	}
	return mid;
}

int main()
{
	cin >> n;
	cout << sqrt(n);
	return 0;
}