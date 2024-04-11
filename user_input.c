#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2]; //declaration of  2-d array
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter a[%d][%d]th element:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //printing of 2-d array
    printf("entered matrix is:\n");
    for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}