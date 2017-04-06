#include<iostream>

using namespace std;

long long arr[101] = {0,};

long long res(long long n)
{
	if(n == 1)
		return 1;
	if(n == 2)
		return 2;
	if (arr[n-2] == 0)
		arr[n-2] = res(n-2)%1000000007LL;

	if (arr[n-1] == 0)
		arr[n-1] = res(n-1)%1000000007LL;
	return arr[n-2] + arr[n-1];
}

int main(void)
{
	int C;
	scanf("%d",&C);
	
	res(60);
	for(int i = 0; i < C; i++)
	{
		long long N;
		scanf("%lld",&N);

		printf("%lld\n",(res(N)%1000000007LL));
	}
}
