#include <stdio.h>

struct Emp
{
    int id;
    char name;
    float sal;
};

union emp
{
    int id;
    char name;
    float sal;
};

int main()
{
    printf("Size of structure is %d\n", sizeof(struct Emp));
    printf("Size of union is %d\n", sizeof(union emp));

    return 0;
}