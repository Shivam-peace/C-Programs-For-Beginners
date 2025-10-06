#include<stdio.h>
int main(){
    int x;
    printf("Enter the number you want to identify as odd : ");
    scanf("%d",&x);

    if(x%2!=0){
        printf("The number %d is odd",x);
    }
    else{
        printf("the number %d is not odd",x);
    }
    return 0;
}