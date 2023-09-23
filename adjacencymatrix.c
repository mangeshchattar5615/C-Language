#include<stdio.h>
int n,m,i,j;
void createadjmatrix(int adj [] [n+1],int arr[][2])
{
	for(i=0;i<n+1;i++)
	{
		for(i-0;j<n+1;j++)
		{
			adj[i][j]=0;
		}
	}
	for(i=0;i<m;i++)
	{
		int x=arr[i][0];
		int y=arr[i][1];
		adj[x][y]=1;
		adj[y][x]=1;
	}
}
void printadjmatrix(int adj[][n+1])
{
	int i,j;
	for(i=0;i<n+1;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%d",adj[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	n=5;
	int arr[][2]={{1,2},{2,3},{4,5},{1,5}};
	m=sizeof(arr)/sizeof (arr[0]);
	int adj[n+1][n+1];
	createadjmatrix(adj,arr);
	printadjmatrix(adj);
	return 0;
}
