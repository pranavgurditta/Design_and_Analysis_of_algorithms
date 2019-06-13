#include<iostream.h>
#include<conio.h>
int c1=0;
void merge(int a[],int l,int m,int r)
{
int L[10];
int c[10];
int i,j,k;
	i=l;
	k=l;
	j=m+1;
	while(++c1 && i <=m  && j <=r )
	{
		if(a[i]<=a[j])
		{
		c[k]=a[i];
		k++;
		i++;
		}
		else
		{
		c[k]=a[j];
		k++;
		j++;
		}
	}

while(i<=m)
{
c[k]=a[i];
k++;
i++;

}
while(j<=r)
{

c[k]=a[j];
k++;
j++;
}


for(i=l;i<k;i++)
{
a[i]=c[i];
}



}
void sort(int a[],int l,int r)
{
if(l<r)
{
int m=(l+r)/2;
sort(a,l,m);
sort(a,m+1,r);
merge(a,l,m,r);
}

}

int main()
{
clrscr();
int n;
int f[10];
cout<<"Enter the number of elements"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>f[i];
}

sort(f,0,n-1);
cout<<"Sorted array using merge sort is "<<endl;


for( i=0;i<n;i++)
cout<<f[i]<<endl;
cout<<"The number of comparisons are "<<c1<<endl;

getch();

}
