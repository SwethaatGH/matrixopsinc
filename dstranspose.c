#include<stdio.h>
#define R 3
#define C 3
void input(int mata[][C],int m,int n)
{   int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter element a[%d][%d]]:",i,j);
            scanf("%d",(*(mata+i)+j));
        }
    }
}
int transpose(int mata[][C],int m,int n)
{   int i,j,temp;
    int matb[m][C];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {           
            *(*(matb+j)+i)=(*(*(mata+i)+j));
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
    return 0;
}
int main()
{   int m,n,i,j,trans;
    printf("Enter no of rows by defining constant R");
    m=R;
    printf("\nEnter no of columns by defining constant C");
    n=C;
    int mata[m][n];
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
    trans=transpose(mata,m,m);
    return 0;
}
