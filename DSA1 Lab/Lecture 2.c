#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int LinearSearch(int A[], int n, int key);
void main()
{
    int A[100],i,n,key;
    printf("enter array size: ");
    scanf("%d",&n);

    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        A[i]=rand()%100+1;
    }
    printf("\nThe array values are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nenter value to search: ");
    scanf("%d",&key);
    if(LinearSearch(A,n,key))
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }

}
int LinearSearch(int A[], int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
