#include<stdio.h>
int main()

{

    int reverse=0, n ,temp;

    printf("Enter the number ;\n");
    scanf("%d",&n);

    temp = n;

    while(n!=0)
    {
       reverse = reverse*10;
       reverse = reverse+n%10;
       n=n/10;
    }
    printf("%d ",reverse);



    if(reverse==temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

}
