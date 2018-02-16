#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    int num,tab;
    printf("enter a number");
    scanf("%d",&num);
    printf("\n given number is : %d ",num);
    printf("\n table of number is : %d",num);
    while(i<=10)
    {
        tab=num*i;
        printf("\n %d * %d = %d  ", num,i,tab);
        i++;
    }

    getch();
}
