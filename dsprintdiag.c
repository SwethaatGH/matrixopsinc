#include<stdio.h>
#define R 3
#define C 3
void input(int mat[][C],int m,int n)
{   int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter element a[%d][%d]]:",i,j);
            scanf("%d",(*(mat+i)+j));
        }
    }
}
void printDiagonal(int mat[][C],int m,int n)
{int i,j;
printf("The elements of the primary diagonal are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {   
            if(i==j)
            {
                printf("%d\n",mat[i][j]);
            }
        }
    }
printf("The elements of the secondary diagonal are:\n");
for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {   
            if(j==(m-1-i))
            {
                printf("%d\n",mat[i][j]);
            }
        }
    }
}
int main()
{   int m,n,i,j;
    printf("Enter no of rows by defining constant R");
    m=R;
    printf("\nEnter no of columns by defining constant C");
    n=C;
    int mat[m][n];
    input(mat,m,n);
    printf("The matrix generated is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",*(*(mat+i)+j));
        }
        printf("\n");
    }
    printDiagonal(mat,m,n);
}