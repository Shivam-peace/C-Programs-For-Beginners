#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swaping the value of a and b is %d and %d respectively...",a,b);
    return 0;
}