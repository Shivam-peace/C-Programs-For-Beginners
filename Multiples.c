#include<stdio.h>
int main(){
    int x,i=1,z;

    printf("Enter the number you want multiples of : ");
    scanf("%d",&x);

    while(i<=10){
        z=x*i;
        printf("%d X %d = %d \n",x,i,z);
        i=i+1;
    }
    return 0;
}