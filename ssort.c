#define max 10
#include<stdio.h>
void ssort(int[]);
void main()
{
    int arr[max];
    ssort(arr);
}
void ssort(int arr[])
{
    int i,j,min,pos,n;
     printf("Enter the no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter arr[%d]=",i);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    for(i=0;i<n-1;i++)
    {
      min=arr[i];
      pos=i;
      for(j=i+1;j<n;j++)
      {
          if(min>arr[j])
          {
              min=arr[j];
              pos=j;
          }
      }
    if(pos!=i)
    {
        arr[pos]=arr[i];
        arr[i]=min;
     }
    }printf("\nSorted array=");
      for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
