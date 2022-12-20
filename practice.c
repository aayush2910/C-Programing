#include<stdio.h>
int main(){
    int i,num;
    printf("enter the no.:");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++){
        if(num % i==0){
        printf("not a prime.");
        break;
        }
    }
    if(i==num){
        printf("prime number.\n");
    }
}