//Q32 : Write a program to check if a number is a palindrome.

      /*
      Sample Test Cases:
      Input 1:
      121
      Output 1:
      Palindrome

      Input 2:
      123
      Output 2:
      Not palindrome

      */ 
     #include <stdio.h>
     int main() {
        int n,original,reverse = 0,remainder;
        printf("Enter n :  ");
         scanf("%d", &n);
         original =0;
         for(; n !=0; n = n /  10)
         {
remainder = n % 10;
reverse = reverse * 10 + remainder;
         }
        if(original == reverse)
       printf("Plindrome");
       else
       printf("Not palindrome");
       return 0;
        }