// factorial with while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;  int num,fact=1;
    printf("enter a number");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("\n factorial of number is : %d ",fact);
    getch();

}
