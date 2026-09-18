//Q64 : Find the digit that occurs the most times in an integer number.

      /*
      Sample Test Cases:
      Input 1:
      112233
      Output 1:
      1

      Input 2:
      887799
      Output 2:
      7

      */
     #include <stdio.h>
     int main() {
        int n,digit,i;
        int count[10] = {0};
        int max =0, most;
        while( n > 0)
        {
            digit = n % 10;
            n = n / 10;
        }
        for(int i =0; i < 10; i++)
        {
            if(count[i] > max) 
            {
                max = count[i];
                most = i;
            }
        }
        printf("Digit occuring most times = %d\n",most);
        printf("It occurs %d times .\n",max );
        return 0;
     }