//Q57 : Find the sum of array elements.

      /*
      Sample Test Cases:
      Input 1:
      4
      2 4 6 8
      Output 1:
      20

      Input 2:
      3
      1 1 1
      Output 2:
      3

      */
     #include <stdio.h>
     int main() {
        int arr[5]={2,4,6,8};
        int i,sum =0;
        int number;
        printf("Enter number  of array : ");
        scanf("%d",&number);
        for(int i= 0; i < 4; i++)
        {
        scanf("%d",&arr[i]);
        
        sum = sum + arr[i];
        }
        printf("sum of array elements = %d", sum);
     
     return 0;
    }
