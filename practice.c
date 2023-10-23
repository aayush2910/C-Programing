// program for prime no.
// #include<stdio.h>
// int main(){
//     int i,num;
//     printf("enter the no.:");
//     scanf("%d",&num);
//     for(i=2;i<=num-1;i++){
//         if(num % i==0){
//         printf("not a prime.");
//         break;
//         }
//     }
//     if(i==num){
//         printf("prime number.\n");
//     }
// }
// factorial of a number.
// #include<stdio.h>
// int main(){
//     int i,n,fact=1;
//     printf("Enter the no.:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact *= i ;
//     }   
//         printf("factorial of %d is:%d\n",n,fact);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("enter the no.\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("enter the no.:");
//     scanf("%d",&n);
//     i=1;
    // while (i<=10)
    // {
    //     printf("%d\n",n*i);
    //     i++;
    // }
//     do
//     {
//         printf("%d\n",n*i);
//         i++;
//     } while (i<=10);
    
//     return 0;
// }
//     for(i=1;i<=10;i++)
//     {
//         printf("%d\n",n*i);
//     }
//     return 0;
// }
// print if two no. are equal
// #include<stdio.h>
// int main(){
//     int a,b;
//   printf("enter two numbers :\n");
//   scanf("%d %d",&a,&b);
//     if(a=b){
//         printf("both are equal.");
//     }
//     else {
//         printf("numbers are different.");
//     }
//     return 0;
// }
// print whether the no. is positive or negative
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the no.:");
//     scanf("%d",&a);
//     if(a>0){
//         printf("it is (+ve)");
//     }
//     else if(a<0){
//         printf("it is (-ve)");
//     }
//     else{
//         printf("zero");
//     }
//     return 0;
// }
//  #include<stdio.h>
//  int main(){
//     int n1=0,n2=1,n3=n1+n2,n,i;
//     printf("enter the no. in the series:");
//     scanf("%d",&n);
//     printf("fabbonic series :%d %d ",n1,n2);
//     for(i=3;i<=n;i++){
//         printf("%d ",n3);
//         n1=n2;
//         n2=n3;
//         n3=n1+n2;
//     }
//     return 0;
// }
//        int year;
//        printf("enter the year");
//        scanf("%d",&year);
//        if (year%400 ==0)
//        {
//         printf("%dis a leap year.",year);
//        }
//        else if (year%4==0)
//        {
//         printf("%d is a leap year",year);
//        }
//        else if(year%100 == 0){
//        printf("It is not a leap year");}
//        else{
//         ("%d is not a leap year",year);
//        }
// return 0;
// }
// #include<stdio.h>
// int main(){
//     int i,n,fact=1;
//     printf("enter the no.:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact*=i;
//     }
//     printf("factorial of %d is %f\n",n,fact);
//     return 0;
// }
//program for prime no.
//#include<stdio.h>
// int main(){
//     int i ,n ;
//     // printf("enter the no.:");
//     // scanf("%d",&n);
//     for(i=2;i<=n;i++){
//         if(n%2==0){
//             printf("%d a prime",n);
//             break;
//         }
//     else if(i==n){
//         printf("%d is prime no.\n",n);
//     }
//     }
//     return 0;
// // }
// program for prime no.
#include<stdio.h>
int main(){
    int i ,n ;
    printf("enter the no.:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            printf("not a prime");
            break;
        }
    }
    if(i==n){
        printf("prime no.\n");
    }
}
// #include<stdio.h>
// int main(){
//     int n,arr[5],i;
//     printf("enter the no.:");
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("entered array value are:\n");
//     for(i=0;i<5;i++){
//         printf("%d\t",arr[i]);
//     }
// }
//#include <stdio.h>

// int main(){
//     /*int i=66;
//     int j=55;
//     int k=44;
//     int sum = i+j+k;

//     float per = sum / 3;
//     printf(" \n%f",per);*/

//     int a;
//     printf("enter the number of rows");
//     scanf("%d", &a);

//     for(int i=1;i<=a; i++){
//         for(int j=1;j<=a-i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// #include <stdio.h> 

// int main(){
//     int n;
//     printf("my self Aayush Fulara .\n");
//     printf("the no i type can be something.\n");
//     scanf("%d",&n);
//     printf("The no is:%d.\n");
//     return 0;
// }