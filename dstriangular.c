#include<stdio.h>
#include<stdlib.h>
void input(int** mat,int m,int n)
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
void triangular(int** mat,int m,int n)
{int i,j,flag1=0,flag2=0,val=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                if(*(*(mat+i)+j)!=0)
                {
                    flag1=1;
                }
            }
            if(j>i)
            {
                if(*(*(mat+i)+j)!=0)
                {
                    flag2=1;
                }
            }
        }
    }
if((flag1==0)&&(flag2==0))
{
    printf("Matrix is both an upper and lower triangular matrix,thus a diagonal matrix.");
}
else if(flag1==0)
{
    printf("Matrix is a lower triangular matrix.");
}
else if(flag2==0)
{
    printf("Matrix is an upper triangular matrix.");
}
else if((flag1==1)&&(flag2==1))
{
    printf("Matrix is not a triangular matrix.");
}
}
int main()
{   int m,n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    int** mat;
    mat=(int**)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
    {
        *(mat+i)=(int*)malloc(n*sizeof(int));
    }
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
    triangular(mat,m,n);
}

