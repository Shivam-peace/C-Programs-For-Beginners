#include<stdio.h>
int main(){
    int x,i=1;
    float fact=1.0;
    printf("Enter the number for the factorial : ");
    scanf("%d",&x);
    for(i;i<=x;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %.2f",x,fact);
    return 0;
}