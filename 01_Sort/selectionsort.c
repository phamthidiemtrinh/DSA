#include <stdio.h>
void SelectionSort(int a[],int n);
void main ()
{ int a[100];
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
SelectionSort(a,n);
for (i=0;i<n;i++) printf("%d   ",a[i]);
}
void SelectionSort(int a[],int n)
{
  int min,i,j;
  for(i=0;i<n-1;i++)
  {
      min=i;
      for(j=i+1;j<n;j++)
        if(a[j]<a[min]) min=j;
      int t= a[i];
      a[i]=a[min];
      a[min]=t;
 }
}
