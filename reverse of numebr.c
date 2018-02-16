#include<stdio.h>
#include<conio.h>
void main()
{
    int num,res,que,sum;
    printf("enter a number");
    scanf("%d",&num);
    printf("\n given a number is : %d",num);

    while(num!=0)
    {
        res=num%10;
        que=num/10;
        sum=sum+res;
        num=que;


    }
    printf("%d\n ",sum);
    getch();
}
