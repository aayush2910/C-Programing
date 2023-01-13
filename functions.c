// #include<stdio.h>
// int sum(int num1,int num2)
// {
//     int add;
//     add=num1 + num2;
//     return add;
// }
// int main(){
//     int a,b;
//     printf("enter the no.:");
//     scanf("%d%d",&a,&b);
//     int add = sum(a,b);
//     printf("%d \n",add);
//     return 0;
// }
#include<stdio.h>
int add(int,int);
int main()
{
    int a=23; int b=35;
    int sum = add(a,b);
    printf("sum is %d",sum);
    return 0;
}
int add(int num1 , int num2)
{
    return (num1+num2);
}