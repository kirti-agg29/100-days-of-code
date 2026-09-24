//Q71 : Read and print a matrix.

      /*
      Sample Test Cases:
      Input 1:
      2 2
      1 2
      3 4
      Output 1:
      1 2
      3 4

      */

      #include <stdio.h>
      int main() {
        int arr[10][20],i,j,n;
        printf("Enter number of array: ");
        scanf("%d",&n);
        printf("Enter element in array :\n");
        for(int i =0;i < 10;i++)
        {
            for(int j =0;j<20;j++)
            {

            }
            scanf("%d",&arr[i][j]);
        }
        printf("matrix is:\n");
        for(int i =0;i <10;i++)
        {
            for(int j =0;j<20;j++)
            {
           printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        return 0;
      }