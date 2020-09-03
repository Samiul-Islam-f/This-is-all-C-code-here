#include<stdio.h>
int main()

{
    int a[10][10], b[10][10], i,j,r,c;

    printf("Enter the number \n");
    scanf("%d%d",&r,&c);

    printf("%d , %d , now write this number \n",r,c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");

    }
    printf("print matrix A -->\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            b[j][i]=a[i][j];
        }

    }

    printf("print Transpose matrix \n");

    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)

        {
            printf("%d ",b[i][j]);
        }

        printf("\n");
    }
    return 0;

}
