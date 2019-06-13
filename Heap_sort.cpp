
#include<iostream.h>
#include<conio.h>
static int c=0;
void maxheapify(int a[],int n,int i)
{

int large=i;
int left=2*i+1;
int right=2*i+2;
if(++c && a[large]<a[left] && left<n)
{
large=left;
}
if(++c && a[large]<a[right] && right<n)
{
large=right;
}
if(large!=i)
{
int t=a[large];
a[large]=a[i];
a[i]=t;
maxheapify(a,n,large);
}
}


void buildheap(int a[],int n)
{

for(int i=n/2-1;i>=0;i--)
{
maxheapify(a,n,i);
}
for(i=n-1;i>=0;i--)
{
int t=a[0];
a[0]=a[i];
a[i]=t;
maxheapify(a,i,0);
}
cout<<"sorted heap is "<<endl;
for( i=0;i<n;i++)
{
cout<<a[i]<<endl;
}

}

			      void main()
			      {
			      int n;
int a[20];
clrscr();
cout<<"enter the number of elements to be sorted"<<endl;
cin>>n;
cout<<"enter the  elements to be sorted"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
buildheap(a,n);
cout<<"The number of comparisons are "<<c<<endl;
getch();
}

