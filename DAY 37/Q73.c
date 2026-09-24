//Q73 : Find the sum of each row of a matrix and store it in an array.

      /*
      Sample Test Cases:
      Input 1:
      2 3
      1 2 3
      4 5 6
      Output 1:
      6 15

      */

      #include <stdio.h>
      int main() {
        int arr[10][10],i,j,row,column;
        sum[10];
        printf("Enter row : ");
        scanf("%d",&row);
        printf("Enter colum : ");
        scanf("%d",&column);
        printf("Enter elemnts in an array:\n");
        for(int i =0;i< 10;i++)
        {
            for(int j =0;j< 10; j++)
            {
                scanf("%d",&arr[i][j]);
                
            }
        }
        for(int i =0; i< 10; i++)
        {
            sum[i] =0;
            for(int j =0;j < 10;j++)
            {
             sum[i]+=arr[i][j];
            }
        }
        printf("sum of each row:\n");
 for(int i =0;i< 10;i++)
 {
    printf("%d",sum[i]);
 }
 return 0;
}
