#include<stdio.h>

int main(){
    int d1=0,d2=1,next,i,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("%d %d ",d1,d2);
    for(i=2;i<n;i++){
        next=d1+d2;
        printf("%d ",next);
        d1=d2;
        d2=next;
    }
    return 0;
}