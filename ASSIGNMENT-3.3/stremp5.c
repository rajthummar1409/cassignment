#include <stdio.h>

struct biodata
{
    int no;
    char name;
    char address;
    int age;
};

int main()
{
    struct biodata e[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the no of %d: ", i + 1);
        scanf("%d", &e[i].no);
        printf("Enter the name of %s: ", i + 1);
        scanf("%d", &e[i].name);
        printf("Enter the address of %s: ", i + 1);
        scanf("%d", &e[i].address);
        printf("Enter the age of %d: ", i + 1);
        scanf("%d", &e[i].age);
    }
    printf("\n\n----------------------------\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("no of %d is %d\n", i + 1, e[i].no);
        printf("no of %d is %s\n", i + 1, e[i].name);
        printf("no of %d is %s\n", i + 1, e[i].address);
        printf("no of %d is %d\n", i + 1, e[i].age);
    }

    return 0;
}