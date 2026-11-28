#include<stdio.h>

int main()
{
    int arr[5],i,search,found=0;

    printf("Enter the numbers:");

    for(i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}

printf("Enter the number to search:");
scanf("%d",&search);

    for(i=0;i<5;i++)
    {
        if(arr[i]==search)
        {
            printf("The number %d is found at index %d",search,i);
             found=1;
             break;
        }
    }
        if(found==0)
        {
            printf("The number %d is not found in the array",search);
        }

return 0;
}

