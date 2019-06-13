#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int c=0;
int partition(int a[],int p,int r)
{
int x=a[r];
int i=p-1;
for(int j=p;j<=(r-1);j++)
{
if(++c && a[j]<=x)
{
i=i+1;
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
int temp=a[r];
a[r]=a[i+1];
a[i+1]=temp;
return i+1;

 }

int randomizedpartition(int a[],int p,int r)
{
int i=p+(rand()%(int) (r-p));
int temp=a[r];
a[r]=a[i];
a[i]=temp;
return partition(a,p,r);
}

void randomizedquicksort(int a[],int p,int r)
{
if(p<r)
{
int q=randomizedpartition(a,p,r);
randomizedquicksort(a,p,q-1);
randomizedquicksort(a,q+1,r);
}
}

int main()
{
clrscr();
int a[10];
int n;

cout<<"Enter the number of elements"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
randomizedquicksort(a,0,n-1);
cout<<"The sorted elements are"<<endl;
for( i=0;i<n;i++)
cout<<a[i]<<endl;
cout<<"The number of comparisons are "<<c<<endl;
getch();
}
