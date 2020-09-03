#include<stdio.h>
#include<conio.h>
int main()


{

    int a[100],i,j,n,temp;

    printf("Enter the number :\n");
    scanf("%d",&n);

    printf("%d - now write this number ;\n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        j=i;

        while(j>0 && a[j-1]>a[j])
        {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    printf("Your insertion Sorting is ;\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
