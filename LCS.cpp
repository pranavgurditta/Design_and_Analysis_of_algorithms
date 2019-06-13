#include<iostream.h>
#include<conio.h>
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}

void main()
{
clrscr();
int m,n;
char X[20],Y[20];
int lcs[21][21];
cout<<"Enter the number of elements of sequence X"<<endl;
cin>>m;
cout<<"Enter the elements of sequence X"<<endl;
for(int i=0;i<m;i++)
cin>>X[i];
cout<<"Enter the number of elements of sequence Y"<<endl;
cin>>n;
cout<<"Enter the elements of sequence Y"<<endl;
for(i=0;i<n;i++)
cin>>Y[i];
char l[100];
for(i=0;i<=m;i++)
{
for(int j=0;j<=n;j++)
{
if(i==0 || j==0)
lcs[i][j]=0;
if(X[i-1]==Y[j-1])
{
lcs[i][j]=lcs[i-1][j-1]+1;
}
else
lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
}
}
int index=lcs[m][n];
i=m;
int j=n;
l[index]='\0';
while(i>0 && j>0)
{
if(X[i-1]==Y[j-1])
{
l[index-1]=X[i-1];
i--;
j--;
index--;
}
else if(lcs[i-1][j]>lcs[i][j-1])
i--;
else
j--;

}

cout<<"The longest common subsequence of the strings entered are"<<endl;
cout<<l;

getch();
}
