#include <stdio.h>
void  bubble (int a[],int n);
void main ()
{ int a[100];
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubble(a,n);
for (i=0;i<n;i++) printf("%d   ",a[i]);
}
void bubble( int a[],int n)
{    int i,j;
     for( i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
          if (a[i]>a[j])
     {
         int t=a[i];
         a[i]=a[j];
         a[j]=t;
     }

}
