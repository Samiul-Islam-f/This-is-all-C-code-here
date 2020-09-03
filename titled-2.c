#include<stdio.h>
#include<conio.h>

int main()

{
    int a[100],n,i,search,first,middle, last;

    printf("Enter the number \n");
    scanf("%d",&n);

    printf("%d - write this number \n",n);

    for(i=0; i<n; i++)

        scanf("%d",&a[i]);


    printf("now write which number you want to be search now ;\n");
    scanf("%d",&search);

    first = 0;
    last = n-1;

    middle=(first+last)/2;
    while(first<=last)
    {
        if(a[middle]<search)

            first=middle+1;

            else if(a[middle]==search)
            {

                printf("value = %d  your pos - %d \n",search+1,middle);
            break;
            }

            else
            last=middle-1;

            middle=(first+last)/2;


    }


    if(first>last)
        printf("your item is not found \n");

    return 0;
}
