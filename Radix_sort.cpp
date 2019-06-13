Source code
#include<iostream.h>
#include<conio.h>
void countsort(int a[],int n,int k,int e)
{
int c[100];
for(int i=0;i<=k;i++)
{
c[i]=0;
}

int b[100];
for(i=0;i<n;i++)
{
c[(a[i]/e)%k]++;
}
for(i=1;i<=k;i++)
{
c[i]=c[i]+c[i-1];
}
for(i=0;i<n;i++)
b[i]=0;
for(int j=n-1;j>=0;j--)
{
b[c[(a[j]/e)%k]-1]=a[j];
c[(a[j]/e)%k]--;
}
for(i=0;i<n;i++)
a[i]=b[i];
}
void main()
{
clrscr();
int a[100],b[10];
int n,max;
cout<<"Enter the upper bound or the maximum element to be stored in the array"<<endl;
cin>>max;;
cout<<"Enter the number of elements of the array"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}


for(i=1;max/i>0;i=i*10)
{
countsort(a,n,10,i);
}
cout<<"The elements are"<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<endl;
getch();
}
