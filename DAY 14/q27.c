//Q27 : Write a program to print the sum of the first n odd numbers.

      /*
      Sample Test Cases:
      Input 1:
      3
      Output 1:
      9

      Input 2:
      5
      Output 2:
      25

      */
     #include <stdio.h>
     int main() {
        int sum,i,n;
        printf("Enter n : ");
        scanf("%d", &n);
        for(i=1;i <= n; i++ )
        {
            if(n != 0)
            printf("Sum of first n odd numbers : ");
            else
            printf("Not a sum of first n odd numbers : ");
            sum = sum + i;
        }
        printf("Sum = %d", sum);
        return 0;
        
     }