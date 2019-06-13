#include<iostream.h>
#include<conio.h>
typedef struct node
{
struct node* next;
int vertex;
}node;

node* G[20];
int visited[20];

void insert(int vi,int vj)
{
node *p,*q;
q=new node;
q->vertex=vj;
q->next=NULL;
if(G[vi]==NULL)
G[vi]=q;
else
{
p=G[vi];
while(p->next!=NULL)
p=p->next;
p->next=q;

}
}
void readgraph()
{
int n;
int i,vi,vj,edges;
cout<<"Enter the number of vertices"<<endl;
cin>>n;

cout<<"Enter the number of edges"<<endl;
cin>>edges;
for(i=0;i<edges;i++)
{
cout<<"Enter an edge ( u, v ) by entering values of just u  
and v "<<endl;
cin>>vi;
cin>>vj;
insert(vi,vj);
insert(vj,vi);
}
}
void DFS(int i)
{
node *p;
cout<<i<<endl;
p=G[i];
visited[i]=1;
while(p!=NULL)
{
i=p->vertex;
if(!visited[i])
DFS(i);
p=p->next;
}
}
void main()
{
clrscr();
int i;
readgraph();
cout<<"Enter starting node"<<endl;
cin>>i;
cout<<"The DFS traversal is"<<endl;
DFS(i);
getch();
}
