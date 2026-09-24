//Q75 : Add two matrices.

      /*
      Sample Test Cases:
      Input 1:
      2 2
      1 2
      3 4
      2 2
      5 6
      7 8
      Output 1:
      6 8
      10 12

      */

      #include <stdio.h>
      int main() {
        int arr[10][10],row,column,i,j;
        
        printf("Enter row  and column : ");
        scanf("%d %d", &row,&column);
        printf("Enter element :\n");
        for(int i =0;i < 10; i++)
        {
            for(int j =0; j< 10; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("Add two matrices :\n");
        for(int i =0; i < 10; i++)
        {
            for(int j =0; j< 10; j++)
            {
                scanf("%d",arr[i][j]);
            }
            printf("\n");
        }
        return 0;

      }