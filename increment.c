#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5];  int i;
           int w,x,y,z;    clrscr();

      for(i=1;i<=4;i++)
      {
    printf("enter 4 numbers   :   \n");
    scanf("%d%d%d%d",&w,&x,&y,&z);
      }
      w=w++;
      x=++x;
      y=y--;
      z=--z;

      printf("after solving we get    : %d",w);
       printf("after solving we get   : %d",x);
        printf("after solving we get  :  %d",y);
         printf("after solving we get  : %d",z);


}
