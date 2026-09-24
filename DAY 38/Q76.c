//Q76 : Check if a matrix is symmetric.

      /*
      Sample Test Cases:
      Input 1:
      2 2
      1 2
      2 1
      Output 1:
      True

      Input 2:
      2 2
      1 0
      2 1
      Output 2:
      False

      */
     #include <stdio.h>
     int main() {
        int arr[10][10],n,i,j,symmetric =0;
        printf("Enter size of matrix : ");
        scanf("%d",&n);
        printf("Enter matrix element :\n");
        for(int i =0; i< 10; i++)
        {
            for(int j =0; j, 10; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i =0; i< 10; i++)
        {
            for(int j =0 ; j< 10; j++)
            {
                if(arr[i][j] != arr[i][j]);
                {

                
                symmetric =0;
                break;
            }
        }
     }
     if(symmetric == 1)
     {

     
     printf("Matrix is symmetric");
     }

     else 
     {
        printf("Matrix is not symmetric");
     }
     return 0;
    }
