#include<stdio.h>
 int main()
 {
    int num, sum=0, reminder;

    printf("Enter the value:");
    scanf("%d", &num);

    while(num>0)
    {
        reminder=num%10;
        sum=sum+reminder;
        num=num/10;
    }
    
    printf("the sum of Digits=%d",sum);
    return 0;

}