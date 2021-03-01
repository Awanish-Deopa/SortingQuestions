#define max 10
#include<stdio.h>
void qsort(int[],int,int);
void main()
{int arr[max],n,i;
 printf("Enter the no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter arr[%d]=",i);
    scanf("%d",&arr[i]);
    }
    qsort(arr,0,n-1);
    printf("\nSorted array");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void qsort(int arr[],int lb,int ub)
{int i,j,key,t;
if(lb<ub)
{
    key=arr[lb];
    i=lb;
    j=ub;

while(i<j)
{
    while(key>=arr[i]&&i<j)
        i++;
    while(key<arr[j]&&j>=i)
        j--;
    if(i<j)
    {
        t=arr[j];
        arr[j]=arr[i];
        arr[i]=t;
    }
}
t=arr[j];
arr[j]=arr[lb];
arr[lb]=t;
qsort(arr,0,j-1);
qsort(arr,j+1,ub);
}
}

