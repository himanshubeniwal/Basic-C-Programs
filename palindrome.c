#include<stdio.h>
#include<conio.h>
void main()
{
    int num,res,que,sum=0,temp;
    printf("enter a number");
    scanf("%d",&num);
    printf("\n given numbr is : %d",num);
    temp=num;
    while(num!=0)
    {
        res=num%10;
        que=num/10;
        sum=sum*10+res;
        num=que;
    }
    if(temp==sum)
    {
        printf("\n numbr is palindrome");

    }
    else{
        printf("\n no. is not palindrome");

    }
    getch();
}
