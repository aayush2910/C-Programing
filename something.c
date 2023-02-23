// #include<stdio.h>

// int sum (int a,int b);

// int main (){
//     int a,b;

//     printf("enter the two no.:");
//     scanf("%d%d",&a,&b);

//     int s = sum(a, b);
//     printf("The sum is %d.\n",s);
//     return 0;

// }

// int sum(int x,int y){
//     return x+y;
// }
//program for area of circle
#include<stdio.h>


float area(int r);


int main(){
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);

    float s = area(r);
    printf("The area  is :%f.\n",s);
}

float area(int x){
    return 3.14*x*x;
}