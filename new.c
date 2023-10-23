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
// #include<stdio.h>


// float area(int r);


// int main(){
//     int r;
//     printf("Enter the radius:");
//     scanf("%d",&r);

//     float s = area(r);
//     printf("The area  is :%f.\n",s);
// }

// float area(int x){
//     return 3.14*x*x;
// }
// #include<stdio.h>
// #include<math.h>

// int main (){
//     int n;
//     printf("Enter the no.:");
//     scanf("%d",&n);

//     printf("%f",pow(n,2));
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// float areasqr(int r);
// float areacir(int r);
// int arearec(int l,int b);


// int main (){
//     int r,l,b;
//     printf("Enter the radius:");
//     scanf("%d",&r);
//     printf("Enter the length:");
//     scanf("%d",&l);
//     printf("Enter the breadth:");
//     scanf("%d",&b);

//     areasqr(r);
//     areacir(r);
//     arearec(l,b);


// }

// float areasqr(int r){
//     printf("area of square is :%f.\n",pow(r,2));
// }
// float areacir(int r){
//     printf("area of circle is :%f.\n",3.14*pow(r,2));
// }
// int arearec(int l,int b){
//     printf("area of rectangle is :%d.\n",l*b);
// }
//>Recursion
// #include<stdio.h>

// void printhlw(int count);

// int main (){
//     printhlw(5);
//     return 0;
// }

// void printhlw(int count){
//     if(count == 0){
//         return;
//     }
//     printf("Hello World\n");
//     printhlw(count-1);
// }
//for sum of first n natural no.
// #include<stdio.h>

// int sum(int n);

// int main (){
//     int n;
//     printf("Enter the no.");
//     scanf("%d",&n);

//     printf("sum of first 5 natural no. is %d.\n",sum(n));

//     return 0;
// }

// int sum(int n){

//     if(n==1)
//     return 1;
//     int sumNm1 = sum(n-1);// sum 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;

// }

// #include<stdio.h>

// int natural(int count);

// int main (){
//     int n;
//     printf("Enter the count value:");
//     scanf("%d",&n);

//     // printf("Natural no. are %d.\n",natural(n));
//     natural(n);
// }

// int natural(int count){
//     int r = count-1;
//     return natural(r);
// }
// #include<stdio.h>

// int fact(int n);

// int main(){
//     int n;
//     printf("Enter the no.:");
//     scanf("%d",&n);

//     printf("Factorial of %d is %d.\n",n,fact(n));

// }

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1*n;
//     return factN;
// }
// #include    <stdio.h>
// int main(){
//     int n;
//     printf("enter the no.");
//     scanf("%d",&n);
//     printf("The table of %d is:\n",n);
//     for(int i=1;i<=10; i++){
    
//         printf("%d\n",(n*i));
//     }
// }
// #include <stdio.h>

// int celtofar(float n);

// int main(){
//     int n;
//     printf("Enter the celcius value:");
//     scanf("%d",&n);
//     celtofar(n);
//     return 0;
// }

// int celtofar(float n){
//     float f=(n*9.0/5.0+ 32);
//     printf("%fF\n",f);
//     return f;
// }
// #include <stdio.h>
// float percentage(int sci,int maths,int san,int english,int PE);

// int main(){
//     int m,n,o,p,q;
//     printf("Enter science marks out of 100: ");
//     scanf("%d",&m);
//     printf("Enter maths marks out of 100: ");
//     scanf("%d",&n);
//     printf("Enter sanskrit marks out of 100: ");
//     scanf("%d",&o);
//     printf("Enter english marks out of 100: ");
//     scanf("%d",&p);
//     printf("Enter PE marks out of 100: ");
//     scanf("%d",&q);
//     //printf("The percentage is %f.\n",percentage(m,n,o,p,q));
//     percentage(m,n,o,p,q);
//     return 0;

// }

// float percentage(int sci, int maths,int san,int english,int PE){
//     int sum = sci + maths + san + english + PE;
//     if(sum < 500){
//     float per = sum * 0.2;
//     printf("%.1f",per);
//     return per;
//     }
// }

//program for converting minutes into hrs , days and years.

// #include<stdio.h>
// int mintohr(int n);
// int mintoday(int n);
// int mintoyrs(int n);

// int main (){
//     int m;
//     printf("Enter the minutes:");
//     scanf("%d",&m);
//     mintohr(m);
//     mintoday(m);
//     mintoyrs(m);
//     return 0;
// }

// int mintohr(int n){
//     float  min = (1.0/60)*n;
//     printf("Minutes into Hrs:%.2f hrs.\n",min);
//     return min;
// }
// int mintoday(int n){
//     float Mn =(1.0/(24*60))*n;
//     printf("Minutes into Days:%.3f day\n",Mn);
//     return Mn;
// }
// int mintoyrs(int n){
//     float M = (1.0/(365*24*60)*n);
//     printf("Minutes into yrs:%.3f yrs\n",M);
//     return M;
// }
