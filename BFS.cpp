#include<iostream.h>
#include<conio.h>
#define max 20;
typedef struct q
{

int f,r;
int data[20];
}q1;
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
int readgraph()
{
int n;
int i,vi,vj,edges;
cout<<"Enter the number of vertices"<<endl;
cin>>n;

cout<<"Enter the number of edges"<<endl;
cin>>edges;
for(i=0;i<edges;i++)
{
cout<<"Enter an edge ( u, v ) by entering values of just u and v "<<endl;
cin>>vi;
cin>>vj;
insert(vi,vj);
insert(vj,vi);
}
return n;
}
void BFS(int i,int n);
void main()
{
clrscr();
int i;
int n=readgraph();
cout<<"Enter starting node"<<endl;
cin>>i;
cout<<"The BFS traversal is"<<endl;
BFS(i,n);
getch();
}

int full(q *p)
{
if(p->r==19)
return 1;
return 0;
}
int empty(q *p)
{
if(p->r==-1)
return 1;
return 0;
}
void enqueue(q *p,int x)
{
if(p->r==-1)
{
p->r=p->f=0;
p->data[p->f]=x;
}
else
{
p->r=(p->r)+1;
p->data[p->r]=x;
}
}
int dequeue(q *p)
{
int x;
x=p->data[p->f];
if(p->r==p->f)
{
p->r=-1;
p->f=-1;
}
else
p->f=(p->f)+1;
return x;
}


void BFS(int v,int n)
{
int w,i,visited[20];
q q1;
node *p;
q1.r=q1.f=-1;
for(i=0;i<=n;i++)
{
visited[i]=0;
}
enqueue(&q1,v);
visited[v]=1;
while(!empty(&q1))
{
v=dequeue(&q1);
cout<<v;
for(p=G[v];p!=NULL;p=p->next)
{

w=p->vertex;
if(visited[w]==0)
{
enqueue(&q1,w);
visited[w]=1;

}
}
}
}


