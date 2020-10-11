#include<stdio.h>
int main()
{
    int i,j,k,arr1[10][10],arr[10][10],Mul[10][10],trans[10][10],row,col,row1,col1;
    printf("Enter row & col of first matrix: ");
    scanf("%d %d",&row,&col);
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)

        {
            printf("enter the element of first matrix: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("value of row1 and col1: ");
    scanf("%d %d",&row1,&col1);
        
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("enter the element of 2nd matrix: ");
            scanf("%d",&arr1[i][j]);
        }
    }
    if (col==row1){
        printf("Matrix multiplication is possible");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col1;j++)
            {
                int s=0;
                for(k=0;k<col;k++)
                {
                    s=s+arr[i][k]*arr1[k][j];
                }
            Mul[i][j]=s;


            }
        }
        printf("Matrix Multipied: ");
        for(i=0;i<row;i++)
        {
            printf("\n");
            for(j=0;j<col1;j++)
            {
                printf("%d ",Mul[i][j]);
            }
        }
    }
    else{
        printf("matrix multiplication is not possible");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col1;j++)
        {
            if (i!=j){

            trans[j][i]=-Mul[i][j];
        } 
        else{
            trans[i][j]=Mul[i][j];
        }    
        }   
    }
        for(i=0;i<col1;i++)
    {
        printf("\n");
        for(j=0;j<row;j++)
        {
            printf("%d ",trans[i][j]);
        }
    }


}