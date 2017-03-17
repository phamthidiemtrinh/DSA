#include <stdio.h>
void interchange(int a[],int n);
void main ()
{ int a[100];
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
interchange(a,n);
for (i=0;i<n;i++) printf("%d   ",a[i]);
}
void interchange(int a[],int n)
{
  int i,j;
  for(i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
        if(a[j]<a[i]){
      int t=a[i];
      a[i]=a[j];
      a[j]=t;}
 }

