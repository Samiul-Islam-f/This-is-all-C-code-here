#include<stdio.h>
#include<conio.h>

int main()

{

    int a[100], i,n,search,first,last, middle;

    printf("Enter the number ;\n");
    scanf("%d",&n);

    printf("%d - now write your number ;\n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Now write the number you want be search now \n");
    scanf("%d",&search);

    //a[0]=0;
    //a[1]=n-1;

    first = 0;
    last = n-1;

    middle =(first+last)/2;

    while(first<=last)
    {
        if(a[middle]<search)
            first = middle + 1;
        else if(a[middle]==search)
        {
            printf("%d - your item is found . is position is - %d \n",search,middle+1);
            break;
        }

        else
            last = middle - 1;
        middle = (first+last)/2;


    }

    if(first>last)
    {
        printf("Your item is not found :\n");
    }
    return 0;



}
