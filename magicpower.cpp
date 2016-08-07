#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	int T;
	scanf("%d",&T);

	for(int l = 0; l < T; l++)
	{
		int N, M;

		scanf("%d %d",&N, &M);
		
		vector<int> list(N, 0);		
		for(int i = 0; i < N; i++)
		{
			scanf("%d",&list[i]);
		}

		sort(list.begin(), list.end());
		
		int sum = 0;
		for(int i = 0; i < M; i++)
		{
			int popped = list.back();
			list.pop_back();
			if(popped != 0)
			{
				sum += popped--;
				list.push_back(popped);
				sort(list.begin(), list.end());
			}
		}

		printf("%d\n",sum);
	}
}
