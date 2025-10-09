#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the value of variable a : ");
    scanf("%d",&a);

    printf("Enter the value of variable b : ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("After swaping the values of a and b,the values is %d and %d respectively...",a,b);
    return 0;
}