#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(int data[], int n);
int main()

{
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

    bubbleSort(data, n);

    printf("\n\nafter sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
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
