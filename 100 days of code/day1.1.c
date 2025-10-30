//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main () {
    int a;
    int b;
    int sum;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("sum of the two numbers=%d",sum);
    return 0;
}