#include<stdio.h>
int main(){
    int x;
    printf("Enter the number you want to identify as even : ");
    scanf("%d",&x);

    if(x%2==0){
        printf("The number %d is even",x);
    }
    else{
        printf("The number %d is not even",x);
    }
    return 0;
}