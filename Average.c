#include<stdio.h>
int main(){
    int a,b,c;
    float avg;

    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the Second number : ");
    scanf("%d",&b);

    printf("Enter the Third number : ");
    scanf("%d",&c);

    avg=(a+b+c)/3.0;
    printf("the average of the %d ,%d and %d is %.2f",a,b,c,avg);
    return 0;
}