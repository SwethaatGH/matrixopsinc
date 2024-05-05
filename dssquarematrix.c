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
int squaremat(int mat[][C],int m,int n)
{
    if(m==n) return 1;
    else return 0;
}
int main()
{   int m,n,i,j,square;
    printf("Enter no of rows by defining constant R");
    m=R;
    printf("\nEnter no of columns by defining constant C");
    n=C;
    int mat[m][n];
    input(mat,m,n);
    print("The matrix generated is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",*(*(mat+i)+j));
        }
        printf("\n");
    }
    square=squaremat(mat,m,n);
    if(square==1)
    {
        printf("Matrix is a square matrix");
    }
    else
    {
        printf("Matrix is a rectangular matrix");
    }
}
