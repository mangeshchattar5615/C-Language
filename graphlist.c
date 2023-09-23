#include<stdio.h>
#include<stdlib.h>
struct node
{
int vertex;
struct node *next;
};
struct node* createnode(int);
struct graph
{
int numvertices;
struct node **adjlists;
};
struct node *createnode(int v)
{
struct node *newnode=malloc(sizeof(struct node));
newnode->vertex=v;
newnode->next=NULL;
return newnode;
}
struct graph *creategraph(int vertices)
{
struct graph*graph=malloc(sizeof(struct graph));
graph->numvertices=vertices;
graph->adjlists=malloc(vertices*sizeof(struct node));
int i;
for(i=0;i<vertices;i++)
graph->adjlists[i]=NULL;
return graph;
}
void addedge(struct graph *graph,int s,int d)
{
struct node *newnode=createnode(d);
newnode->next=graph->adjlists[s];
graph->adjlists[s]=newnode;
newnode=createnode(s);
newnode->next=graph->adjlists[s];
graph->adjlists[d]=newnode;
}
void printgraph(struct graph*graph)
{
int v;
for(v=0;v<graph->numvertices;v++)
{
struct node* temp=graph->adjlists[v];
printf("\n vertex %d\n",v);
while (temp)
{
printf("%d->",temp->vertex);
temp=temp->next;
}
printf("\n");
}
}
int main()
{
struct graph *graph=creategraph(4);
addedge(graph, 0,1);
addedge(graph, 0,2);
addedge(graph, 0,3);
addedge(graph, 0,2);
printgraph(graph);
return 0;
}

