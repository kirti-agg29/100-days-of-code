//Q72 : Find the sum of all elements in a matrix.

      /*
      Sample Test Cases:
      Input 1:
      2 3
      1 2 3
      4 5 6
      Output 1:
      21

      */

      #include <stdio.h>
      int main() {
        int arr[10][10],i,j,rows,column,sum =0;
        printf("Enter rows : ");
        scanf("%d",&rows);
        printf("Enter column : ");
        scanf("%d",&column);
        printf("Enter elements:\n");
        for(int i =0; i < 10; i++)
        {
            for(int j =0;j< 10; j++);
            {
                scanf("%d",&arr[i][j]);
                sum = sum +arr[i][j];
            }
        }
        printf("sum of matris is %d",sum);
        return 0;
      }