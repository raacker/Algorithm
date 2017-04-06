#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>

using namespace std;

struct spot{
	double x;
	double y;
};
struct edge
{
	spot start;
	spot end;
	double weight;
};

double dist(spot a1, spot a2);

double main(void)
{
	int C;
	scanf("%d",&C);

	for(int l = 0; l < C; l++)
	{
		int N;
		scanf("%d",&N);

		set<spot> spots(N);	
		vector<edge> edges((N*N-1)/2);

		for(int i = 0; i < N; i++)
		{
			cin >> spot[i].x >> spot[i].y;
		}
		for(int i = 0; i < N; i++)
		{
			for(int j = i; j < N; j++)
			{
				edge newEdge;
				newEdge.start = spot[i];
				newEdge.end = spot[j];
				newEdge.weight = dist(spot[i], spot[j]);
				edges.push_back(newEdge);
			}
		}
		
	}
}

double dist(spot a1, spot a2)
{
	return sqrt(pow((a1.x-a2.x),2) + pow((a1.y-a2.y),2));
}
