// #include<stdio.h>
// int main(){
//     int arr[5],i,j;
//     printf("enter the no.:");
//     for(i=0;i<5;i++){
//     scanf("%d",&arr[i]);
//     }
//     printf("\nDisplaying no.:\n");
//     for(i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     struct student{
//         char name[25];
//         int roll;
//         int marks;
//     }s;
//     printf("enter the name:\n");
//     scanf("%s",&s.name);
//     printf("enter the roll:");
//     scanf("%d",&s.roll);
//     printf("enter the marks:");
//     scanf("%d",&s.marks);
//     printf("Display informaion.\n");
//     printf("name:%s\n",s.name);
//     printf("roll:%d\n",s.roll);
//     printf("marks:%d\n",s.marks);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a[3][2],i,j;
//     printf("enter the value of matrix:\t");
//     for(i=0;i<3;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("values of matrix are:");
//     for ( i = 0; i < 3; i++)
//     {
//         for (j = 0; j <2; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
        
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i,j,num1,num2,pnt;
//     printf("entr the upper and lower limit.:\n");
//     scanf("%d%d",&num1,&num2);
//     if(num1>num2){
//         printf("%d must be greater than %d",num2,num1);
//     }
//     printf("prime no between %d and %d are:\n",num1,num2);
//     for(i=num1;i<=num2;i++){
//         pnt=0;
//         for(j=2;j<=i/2;j++){
//             if(i%j==0){
//                 pnt++;
//                 break;
//             }
//         }
//         if(pnt==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int add(num1,num2)
// {
//     int sum;
//     sum=num1 + num2;
//     return sum;
// }
// int main(){
//     int a,b;
//     printf("enter the two number.:");
//     scanf("%d%d",&a,&b);
//     int sum=add(a,b);
//     printf("%d",sum);
//     return 0;
// }    
// #include<stdio.h>
// long factorial(int n)
// {
//     if(n==0){
//         return 1;
//     }
//     else 
//     return (n*factorial(n-1));
// }
// int main(){
//     int num;
//     long fact;
//     printf("enter the no.:");
//     scanf("%d",&num);
//     fact = factorial(num);
//     printf("Factorial of %d is %ld\n",num,fact);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("enter the no.:");
//     scanf("%d",&n);
//     for(i=1;i<=10;i++){
//         printf(" %d *%d = %d\n",n,i,(n*i));
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    float a=1.0;
    int b=60;
    float c=(1.0/60);   
    int d= 7/3;   
    int e= 7%3;
    float g= a/b;
    float f = 240/60;
    printf("%.3f\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%f\n",f);
    printf("%f\n",g);
    return 0;
}