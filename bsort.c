#define max 10
#include<stdio.h>
void bsort(int[],int);
void main()
{int arr[max];
    bsort(arr);
}
void bsort(int arr[],int n)
{
    int i,j,temp;
    printf("Enter the no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter arr[%d]=",i);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }printf("\nSorted array=");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}

