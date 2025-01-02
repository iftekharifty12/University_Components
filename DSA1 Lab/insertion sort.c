#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(int A[], int n);
int main()

{
    //printf("hello");

    int data[100], n, i;

    printf("enter array size: ");
    scanf("%d",&n);


    srand(time(NULL));
    for(i = 0; i < n; i++)
    {
        data[i] = rand()%100+1;
    }

    printf("before sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    insertionSort(data, n);

    printf("\n\nafter sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
}

 void insertionSort(int A[],int n)
 {
     int i,j,key;
     for(i=1;i<n;i++)
     {
         key = A[i];
         for(j=i-1;j>=0 && A[j]>key; j--)
         {
             A[j+1]= A[j];
         }
         A[j+1]=key;
     }
 }
