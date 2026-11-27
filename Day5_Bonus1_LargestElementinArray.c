#include<stdio.h>
int main()
{
    int arr[5],i,max;

    printf("Enter the numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=arr[0];
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
        
    printf("The largest number in array is %d",max);
    return 0;
}