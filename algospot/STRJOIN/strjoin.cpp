#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

bool decre(int i, int j) { return (i > j);}

int main(void)
{
	int test_count;

	scanf("%d",&test_count);

	for(int i = 0; i < test_count; i++)
	{
		int str_count;
		scanf("%d",&str_count);
		
		vector<int> v;

		for(int j = 0; j < str_count; j++)
		{
			int str;
			scanf("%d",&str);
			v.push_back(str);
		}
		
		sort(v.begin(), v.end(), decre);

		int ans = 0;
		while(v.size() != 1)
		{
			int min1 = v.back();
			v.pop_back();
			int min2 = v.back();
			v.pop_back();
			int merge = min1+min2;
			ans += merge;

			v.push_back(merge);
			sort(v.begin(), v.end(), decre);
		}

		printf("%d\n",ans);
	}
}