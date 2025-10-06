#include<stdio.h>
#define MIN 1
#define MAX 100
int main(){
    int x;

    printf("Enter the number between %d to %d : ",MIN,MAX);
    scanf("%d",&x);

    if(MIN<=1&&x<=MAX){
        printf("The number %d is within the limit \n",x);
    }
    else{
        printf("The number is out of limit \n");
    }
    return 0;
}