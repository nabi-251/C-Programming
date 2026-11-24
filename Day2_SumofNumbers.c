#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter the n value:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of number is %d",sum);
    
    return 0;
}