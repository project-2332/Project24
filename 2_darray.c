#include<stdio.h>
int main()
{
    int a[2][2];
    a[0][0]=1;
    a[0][1]=2;
    a[1][0]=3;
    a[1][1]=4;

    int i,j;
    printf("entered matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}