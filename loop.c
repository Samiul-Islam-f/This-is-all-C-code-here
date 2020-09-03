#include<stdio.h>
int main()

{

    int year, i,n;

    printf("Enter the year ;\n");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        printf("%d - leap year \n",year);
    }
    else{
        printf(" %d - is not leap year \n",year);
    }

}
