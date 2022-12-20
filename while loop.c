/*program for natural no. from 1 to n
#include<stdio.h>
int main (){
    int i,end;
    printf("enter all no. from 1 to :");
    scanf("%d",&end);
    i=1;
    while(i<=end)          //in while first check the condition
    {                      //if true then enters into the body and execute it and again goes to check the condition
        printf("%d\n",i);  //if the conditions is false then it terminates or exits from the loop
        i++;
    }
    return 0;
}
//natural no. in reverse (from n to 1)
#include <stdio.h>
int main(){
    int n;
    printf("enter the natural number n :");
    scanf("%d",&n);
    while(n>=1){
        printf("%d ",n);
        --n;
    }
    return 0;
}
//alphabet from a to z
#include<stdio.h>
int main(){
    char ch = 'A';
    while (ch<='Z')
    {
        printf("%c ",ch);
        ch++;
    }
    return 0;
}
//even natural no. from 1 to 100
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the natural no. till :");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        if(i%2== 0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
//odd natural no. from 1 to 100
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the natural no. till :");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        if(i%2== 1){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}*/