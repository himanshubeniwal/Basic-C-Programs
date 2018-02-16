#include<stdio.h>
#include<conio.h>
void main()
{
     int num,res,que,sum=0,temp;
     printf("enter a number");
     scanf("%d",&num);
     printf("given numebr is : %d ",num);
     temp=num;
     while(num!=0)
     {
         res=num%10;
         que=num/10;
         sum=sum+res*res*res;
         num=que;
    printf("\n res = :   %d ",res);
     printf("\n que= :  %d ",que);
     printf("\n num = : %d ",num);
     printf("\n sum = : %d ",sum);
     }

     if(temp==sum)
     {
         printf("\n given numbr is amstrng");

     }
     else {
        printf("\n given numebr is not amstrong ");
     }

     getch();
}
