#include<stdio.h>
#include<string.h>

    struct person
    {
        char name[20];
        int age;
        double salary;

    };

    int main()
    {
        struct person person1[3];
        int i;

        for(i=0; i<3; i++)
        {
            printf("Enter the information for person %d \n",i+1);
            printf("---------------------------------------\n");

            printf("Enter f name ;\n");
            scanf("%s",&person1[i].name);

            printf("Enter your age ;\n");
            scanf("%d",&person1[i].age);

            printf("Enter your salary ;\n");
            scanf("%lf",&person1[i].salary);

        }


        for(i=0; i<3; i++)
        {
            printf("Information for person %d \n",i+1);
            printf("-------------------------------\n");

            printf(" Name :- %s \n",person1[i].name);
            printf("Age ;- %d \n",person1[i].age);
            printf("Salary ;- %lf \n",person1[i].salary);
            printf("---------------------------------\n");
        }
    }
