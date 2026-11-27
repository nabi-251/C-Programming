#include<stdio.h>
 int main()
 {
    int arr[5],i,sum=0;

    printf("Enter the marks:");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum of array is %d",sum);
    return 0;
 }