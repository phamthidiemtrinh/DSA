#include <stdio.h>
#include <conio.h>
void  heapsort (int a[],int n);

void main ()
{ int a[100];
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
  heapsort(a,n);
for (i=0;i<n;i++) printf("%d   ",a[i]);
}
void heapfy( int a[],int n,int vt)
{
  while (vt<=n/2-1)
  {
      int n1=2*vt+1;
      int n2=2*vt+2;
      int now=n1;
      if(n2<n && a[n2]>a[now]) now=n2;
      if(a[vt]<a[now])
      {
          int t=a[vt];
          a[vt]=a[now];
          a[now]=t;
      }
      vt=now;
  }
}
void heapsort(int a[],int n)
{
    for (int i=n/2-1;i>=0;i--) heapfy(a,n,i);
    for (i=n-1;i>=0;i--)
    {
        int t=a[0];
        a[0]=a[i];
        a[i]=t;
        heapfy(a,i,0);
    }
}
