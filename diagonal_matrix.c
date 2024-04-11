#include<stdio.h>
int main()
{
    int i,j,m,n;
    int mat[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter mat[%d][%d]th element:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Your given matrix is:\n");
    for(i=0; i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
          
        }
        printf("\n");
    }
    printf("Diagonal element from leftward are: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d\t",mat[i][j]);
            }
        }
    }
    printf("\nDiagonal element from rightward are:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)   //if(i+j==m-1)
            {
                printf("%d\t",mat[i][j]);
            }
        }
    }
}