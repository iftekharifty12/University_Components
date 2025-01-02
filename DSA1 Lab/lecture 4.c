#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(int data[],int n);
void LinearSearch(int data[], int n, int key);

int main()
{
    int data[100], n, i, key;

    printf("Enter array size: ");
    scanf("%d",&n);

    srand(time(NULL));
    for(i=0,i<n, i++)
    {
        data[i]=rand()%100+1;
    }
    printf("\nEnter the value to search: ");
    scanf("%d",&key);

    if(LinearSearch(data,n,key))
    {

    }
}
void LinearSearch(int data[],int n, int key)
{
    int data[],i,n,
}
void customOrder(int data[],int n)
{
    int cArray[100],i;
    for(i=0;i<n;i++)
    {
        cArray[data[i]]++;
    }
}
