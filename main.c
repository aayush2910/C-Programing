/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Hello world!");
    return 0;
}*/
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the no.:");
    scanf("%d",&n);
    for(i=1;i<11;i++){
        printf("%d\n",(n*i));
    }
    return 0;
}