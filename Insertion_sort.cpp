#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
int p[20];
cout<<"Enter the number of elements to be sorted"<<endl;
cin>>n;
cout<<"Enter the  elements to be sorted"<<endl;
for(int i=0;i<n;i++)
cin>>p[i];
int c=0;
for(i=1;i<n;i++)
{
int value=p[i];
int hole=i;
while(++c && hole>0 && p[hole-1]>value)
{
p[hole]=p[hole-1];
hole--;
}
p[hole]=value;
}
cout<<"the array is"<<endl;
for(int u=0;u<n;u++)
{
cout<<p[u]<<endl;
}
cout<<"The number of comparisons are "<<c<<endl;
getch();
}
