#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(int data[], int n);
int LinearSearch(int data[], int n, int key);
int binarySearch(int data[], int n, int key);
void main()
{
    int data[100],i,n,key;
    printf("enter array size: ");
    scanf("%d",&n);

    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        data[i]=rand()%100+1;
    }
    printf("\nThe array values are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\nenter value to search: ");
    scanf("%d",&key);
    if(binarySearch(data,n,key)==1)
    {
        printf("found\n");
    }
    else
    {
        printf("not found\n");
    }

}
void bubbleSort(int data[], int n){
    int i,j,temp;
    for(i=0; i<n-1;i++)
    {
        for (j=0; j<n-1-i;j++)
        {
            if(data[j]>data[j+1])
            {
                temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
}
int binarySearch(int data[], int n, int key)
{
    int lo= 0, hi=n-1, mid;
    bubbleSort(data,n);
    while(lo <= hi)
    {
        mid=(lo+hi)/2;
        if(data[mid]==key)return 1;
        else if(data[mid]<key)lo=mid+1;
        else hi=mid-1;
    }
    return 0;
}


