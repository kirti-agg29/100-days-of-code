//Q31 : Write a program to take a number as input and print its equivalent binary representation.

      /*
      Sample Test Cases:
      Input 1:
      10
      Output 1:
      1010

      Input 2:
      7
      Output 2:
      111

      */ 
     #include <stdio.h>
     int main() {
        int n, i, binary[32], j = 0;
        printf("Enter a number : ");
        scanf("%d", &n);

        if(n == 0) {
        printf("Binary = 0");
        return 0;
     }
     for (; n> 0; n = n / 2)
     {
        binary[j] = n % 2;
        j++;
     }
     printf("Binary = ");
     for (i = j - 1; i >=0; i--)
        {
            printf("%d", binary[i]);
        }
        return 0;
    }
     