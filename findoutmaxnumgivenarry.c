#include<stdio.h>
int main()
{
    int i,max;
    int a[6]={20,30,40,50,60,70};

    max=a[0];
    for(i=0;i<6;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("max value of anarray is %d ",max);
    return 0;
}