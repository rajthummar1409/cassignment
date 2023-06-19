
#include<stdio.h>
int main()
{ 
  int a=20,b=20,option;

    printf("Select option 1 for Addition\n");
    printf("Select option 2 for Subtraction\n");
    printf("Select option 3 for Multiplication\n");
    printf("Select option 4 for Division\n");
    printf("select option 5 for nodulo\n");
    printf("Please selecte any one option: ");

    scanf("%d",&option);

switch(option)
{
 case 1:
    printf("Addition of %d and %d is %d", a ,b,a+b);
    break;
    case 2:
    printf("Subtraction of %d and %d is %d" ,a,b,a-b);
    break;
    case 3:
    printf("Multiplication of %d and %d is %d ",a,b,a*b);
    break;
    case 4:
    printf("Division of %d and %d is %d",a,b,a/b);
    break;
    case 5:
    printf("Nodulo of %d and %d is %d",a,b,a%b);
    break;

    default:
    printf("Plese enter valid value");
    break;
}

  return 0;
}