#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main(void)
{
	int number;
	vector<char> v;

	cin >> number;

	while (number > 0)
	{
		if (number % 2 == 0)
			v.push_back('0');
		else
			v.push_back('1');
		number /= 2;
	}
	vector<char>::reverse_iterator iter = v.rbegin();
	int size = v.size();
	for (; iter != v.rend(); iter++)
	{
		if ((*iter) == '0')
			size--;
		else if ((*iter) == '1')
			printf("%d ", size--);
	}
}