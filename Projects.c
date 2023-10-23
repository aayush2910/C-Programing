#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    int number;
    srand(time(0));
    number= rand()%10;
    printf("The random no.is %d. \n",number);
    printf("\n");
    return 0;
}