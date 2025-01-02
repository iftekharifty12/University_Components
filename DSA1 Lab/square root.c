#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float squareRoot(int n);

int main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    printf("Square root of %d is %f", num,squareRoot(num));

}
float squareRoot(int n)
{
    float lo =0, hi=n, mid;
    float th=0.005;
    while(1)
    {
        mid=(lo+hi)/2;
        if(n-th<= mid*mid && mid*mid<=n+th) return mid;
        else if(mid*mid>n)hi=mid;
        else lo=mid;
    }
}
