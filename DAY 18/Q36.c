//Q36 : Write a program to find the HCF(GCD) of two mumbers;




   #include<stdio.h>
   int main() {
    int a,b,rem;
    printf("Enter two numbers : ");
    scanf("%d %d", &a,&b);
    while( b !=0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    printf("HCF (GCD) = %d", a);
    return 0;
   }