//Q33 : Write a program to check if a number is an Armstrong number.

      /*
      Sample Test Cases:
      Input 1:
      153
      Output 1:
      Armstrong

      Input 2:
      123
      Output 2:
      Not Armstrong

      */
     #include <stdio.h>
     int main() {
        int n, sum, original, remainder;
        printf("Enter n : ");
        scanf("%d", &n);
        for(; n !=0; n = n / 10)
         {
       remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
         }
         if(sum == original)
         
            printf("Armstrong number");
            else
            printf("Not armstrong number");
            return 0;
         }
     