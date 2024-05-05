#include<stdio.h>
#include<stdlib.h>
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
int identity(int mat[][C],int m,int n)
{int flag1=0,flag2=0,i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {   if(i==j)
            {
                if((mat[i][j]==0)||(mat[i][j]!=1))
                    {
                        flag1=1;
                    }
            }
            if(i!=j)
            {   
                if(mat[i][j]!=0)
                {
                   flag2=1; 
                }                
            }           
        }
               
    }
if((flag1==1||flag2==1))
return 0;
else return 1; 
}
int main()
{   int m,n,i,j,iden;
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
    iden=identity(mat,m,n);
    if(iden==1)
    {
        printf("Matrix is a diagonal matrix");
    }
    else
    {
        printf("Matrix is not a diagonal matrix");
    }
}