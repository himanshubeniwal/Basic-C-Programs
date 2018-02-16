#include<stdio.h>
#include<conio.h>
main()
{
    int m[3][3],n[3][3];
    int i,j;
    printf("Enter elements in matrix m: \n");
    for(i=0;i<=2;i++)
      {

        for(j=0;j<=2;j++)
            {
             scanf("%d",&m[i][j]);
            }
      }
/*printf("Enter elements for second matrix :\n");
     for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            {
             scanf("%d",&n[i][j]);
            }
   */ printf("matrix is :\n");
    for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
    {
        printf(" %d  \n ",m[i][j]);
    }
    printf("   ");
     }
getch();
}
