#include <stdio.h>
#include <stdlib.h>
int det(int** mat,int n);
int main()
{
    int** mat;
    int i,j,n,value;
    printf("Enter the order of the matrix: \n");
    scanf("%d",&n);
    mat=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        *(mat+i)=(int*)malloc(n*sizeof(int));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element mat[%d][%d]:",i,j);
            scanf("%d",(*(mat+i)+j));
        }
        printf("\n");
    }
    printf("The generated matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",*(*(mat+i)+j));
        }
        printf("\n");
    }
    value=det(mat,n);
    printf("%d",value);
}
int det(int** mat,int n)
{int x;
    int** minor;
    minor=(int**)malloc(n*sizeof(int*));
    for(x=0;x<n;x++)
    {
        *(minor+x)=(int*)malloc(n*sizeof(int));
    }
    int i,j,k,rm,cm;
    int determinant=0;
    int sign=1;
    if(n==2)
    {
        determinant = (*(*(mat+0)+0))*(*(*(mat+1)+1))-(*(*(mat+0)+1))*(*(*(mat+1)+0));
        return determinant;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            rm=0,cm=0;
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(j!=0&&k!=i)
                    {
                        *(*(minor+rm)+cm)=*(*(mat+j)+k);
                        cm++;
                        if(cm>n-2)
                        {
                            rm++;
                            cm=0;
                        }
                    }
                }
            }
            determinant=determinant+(sign*((*(*(mat+0)+i))*det(minor,n-1)));
            sign*=(-1);
        }
    }
    return determinant;
}