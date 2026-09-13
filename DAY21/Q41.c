//Q41 : Write a program to swap the first and last digit of a number.

      /*
      Sample Test Cases:
      Input 1:
      1234
      Output 1:
      4231

      Input 2:
      1001
      Output 2:
      1001

      */

      #include <stdio.h>
      int main() {
        int n,first,last,digit=0,divisor,middle,result;
        printf("Enter a number : ");
        scanf("%d", &n);
        last = n % 10;
        int temp = n;
        while(temp >= 10)
        {
            temp = temp / 10;
            digit++;
        }
        first = temp;
        divisor = 1;
        for(int i =0;i < digit; i++)
        {
            divisor  = divisor * 10;
        }
        middle = (n % divisor) / 10;
        result = last *divisor + middle * 10 + first;
        printf("Number after swapping is : %d", result);
    return 0;
      }

        
        
            