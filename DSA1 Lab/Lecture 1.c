#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selectionSort(int A[], int n);

int main()
{
    int A[100], n ,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        A[i]=rand()%100+1;
    }
    printf("before sorting data: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    selectionSort(A,n);
    printf("\n\nafter sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
void selectionSort(int A[],int n)
{
    int i,j,minIndex, temp;

    for(i=0;i<n-1;i++)
    {
        minIndex=i;
        for(j=i+1;j<n;j++)
        {
           if(A[minIndex]>A[j])
        {
            minIndex=j;
        }
    }
    temp=A[minIndex];
    A[minIndex]=A[i];
    A[i]=temp;
    }
}
