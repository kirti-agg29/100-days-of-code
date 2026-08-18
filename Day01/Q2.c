// Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:a=2
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3 
a=10 b=2

Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b); 
    
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;

    printf("sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, difference, product, quotient);
    return 0;

    
}