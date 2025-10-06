#include<stdio.h>
int main(){
    int x,y,i=2,end;
    printf("Enter the number you want to identify as prime : ");
    scanf("%d",&x);
    y=x-1;

    while(i<=y){
        if(x%i==0){
            printf("The number %d is not prime",x);
            end=0;
            break;
        }

        else{
            i=i+1;
            end=1;
        }
    }
    if(end==1){
        printf("The number %d is prime",x);
    }
    return 0;
}