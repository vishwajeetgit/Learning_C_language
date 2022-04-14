
//Author: Vishwajeet kumar.
//Date  : 14:4:2022.
//Discription: This program will compare which number is greater.

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter 1st number :) ");
    scanf("%d",&a);
    printf("Enter 2nd number :) ");
    scanf("%d",&b);
    if(a > b){
	printf("1st no. (%d) is greater then 2nd no. (%d).\n",a,b);
    }
    else{
	printf("2nd no. (%d) is greater then 1st no. (%d).\n",b,a);
    }

    return 0;
}
