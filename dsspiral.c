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
void spiral(int** mat,int m,int n)
{
    int i,row=0,col=0;
    printf("The elements printed spirally are:");
    while((row<m)&&(col<n))
    {
        for(i=col;i<n;i++)
        {
            printf("%d ",*(*(mat+row)+i));
        }
        row++;
        for(i=row;i<m;i++)
        {
            printf("%d ",*(*(mat+i)+(n-1)));
        }
        n--;
        if(row<m)
        {
            for(i=n-1;i>=col;i--)
            {
                printf("%d ",*(*(mat+(m-1))+i));
            }
            m--;
        }
        if(col<n)
        {
            for(i=m-1;i>=row;i--)
            {
                printf("%d ",*(*(mat+i)+col));
            }
            col++;    
        }        
    }
}
int main()
{   int m,n,i,j;
    int** mat;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
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
    spiral(mat,m,n);
}