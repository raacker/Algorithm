#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	int T;
	scanf("%d",&T);
	
	for(int l = 0 ; l < T; l++)
	{
	  int N, Q;
	  scanf("%d %d",&N, &Q);

	  //int* tree = new int[N];
	  vector<int> tree(N, 0);

	  for(int i = 1; i < N; i++)
	  {
		  scanf("%d",&tree[i]);
	  }
	  
	  for(int i = 0; i < Q; i++)
	  {
		  int left=0, right=0;
		  scanf("%d %d",&left, &right);
			  
		  int left_count = 0, right_count = 0;
		  int isFound = 0;
		  int k = right;
		  if(left == right)
		  {
			  printf("%d\n",0);
			  continue;
		  }
			
		  if(left == 0)
		  {
			while(k != 0)
			{
		      right_count++;
			  k = tree[k];
			}
			printf("%d\n",right_count);
			continue;
		  }
		  while(left != 0)
		  {	
			  isFound = 0;
			  k = right;
			  right_count = 0;

			  if(left == k)
			  {
				  printf("%d\n",left_count + right_count);
				  isFound = 1;
				  break;
			  }
			  while(k != 0)
			  {
				  right_count++;
				  k = tree[k];
				  if (left == k)
				  {
					  printf("%d\n",left_count + right_count);
					  isFound = 1;
					  break;
				  }
			  }
				 
			  if (isFound)
				  break;	 
			  left_count++;	
			  left = tree[left];		
		  }

		  if(isFound == 0)
		  {
			  printf("%d\n",left_count+right_count);
		  }
	  }
	}
}
