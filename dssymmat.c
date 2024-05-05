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
int symmat(int mata[][C],int matb[][C],int m,int n)
{   int i,j,flag;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(matb+i)+j)=*(*(mata+i)+j);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(matb+j)+i)=(*(*(mata+j)+i));
        }
    }
    printf("Transpose of Matrix A is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",*(*(matb+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(*(matb+i)+j)!=*(*(mata+i)+j))
            flag=1;
        }
    }
    if(flag==1)
    return 1;
    else return 0;
}
int main()
{   int m,n,i,j,sym;
    printf("Enter no of rows by defining constant R");
    m=R;
    printf("\nEnter no of columns by defining constant C");
    n=C;
    int mata[m][n],matb[m][n];
    input(mata,m,n);
    printf("The matrix generated is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",*(*(mata+i)+j));
        }
        printf("\n");
    }
    sym=symmat(mata,matb,m,m);
    if(sym==1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is asymmetric");
    }
}
