#include <stdio.h>

struct Emp
{
    int no;
    char name[50];
    char Address[50];
    int age;
};

int main()
{
    struct Emp e1 = {1, "Thummar arpit niteshbhai", "C190 Mahalxmi soyogichwk surat", 23};
    printf("%d %s %s %d\n", e1.no, e1.name, e1.Address, e1.age);
    return 0;
}