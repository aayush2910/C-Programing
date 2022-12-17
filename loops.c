//print no from 1 to 25
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the no.:");
    scanf("%d",&n);
   for(i=1;i<11;++i){
        printf("%d\n",(n*i));
    }                               
    return 0;
}