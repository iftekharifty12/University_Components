#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selectionSort(int data[],int n);
void bubbleSort(int data[], int n);
void insertionSort(int data[], int n);
void linearSearch(int data[], int n, int key);
void binarySearch(int data[], int n, int key);

void main()
{
    int data[100],i,n,key;
    printf("Enter array size: ");
    scanf("%d",&n);

    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        data[i]=rand()%100+1;
    }

    printf("values: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n Enter value to search: ");
    scanf("%d ", &key);
    if(binarySearch(data,n,key))
    {
        printf("found\n");
    }
    else
    {
        printf("not found");
    }
}

void binarySearch(int data[],int n, int key)
{
    int lo=0, hi=-1,mid;
    bubbleSort(data,n);
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        if(data[mid]==key) return 1;
        else if(data[mid]<key) lo=mid+1;
        else hi=mid-1;
    }
    return 0;
}

void bubbleSort(int data[], int n)
{
    int i, j,temp;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
}
