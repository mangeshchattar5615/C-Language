#include<stdio.h>

int maim()
{
int graph[10][10],i,j,n;
int id=0,od=0,dg=0;
printf("Enter how many vertices in graph");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;i<n;i++)
{
printf("how many edge between v%d and v%d:",i,j);
scanf("%d"&graph[i][j]);
}
}
printf("adjacencymatrix representation is:|n");
for (i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d",graph[i][j]);
}
printf("\n");
}
for (i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
id=id+graph[j][i];
od=od+graph[i][j];
}
dg=dg+id+od;
printf("indegree and outdegree of v%d and &d and %d|\n",i,id,od);
id=0;
od=0;
}
printf("degree of graph is &d\n",dg);
}

