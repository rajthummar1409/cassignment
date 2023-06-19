#include<stdio.h>
int main()
{
    int x=20,y=30;
    
printf("Before swap x=%d y=%d",x,y);      

x=x+y;//a=30 (10+20)    
y=x-y;//b=10 (30-20)    
x=x-y;//a=20 (30-10)    

printf("\nAfter swap x=%d y=%d",x,y);    

return 0;  

}