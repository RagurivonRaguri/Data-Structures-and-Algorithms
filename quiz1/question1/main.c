#include <stdio.h>

int main(int a, int b, int c){
    printf("Enter the first integer:\n");
    scanf("%d",&a);
    printf("Enter the second integer");
    scanf("%d",&b);
    c = a+b;
    printf("The result is %d",c);
    return 0;
}