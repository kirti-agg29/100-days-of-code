//Q77 : Check if the elements on the diagonal of a matrix are distinct.

      /*
      Sample Test Cases:
      Input 1:
      3 3
      1 2 3
      4 5 6
      7 8 1
      Output 1:
      False

      Input 2:
      3 3
      1 2 3
      4 5 6
      7 8 9
      Output 2:
      True

      */

      #include <stdio.h>
      int main() {
     int arr[10][10],n,i,j,distinict=1;
     printf("Enter size of matrix : ");
     scanf("%d",&n);
     printf("Enter matrix element :\n");
        for(int i =0; i< n; i++)
        {
            for(int j =0 ; j< n; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i =0; i < n ;i++)
        {
            for(int j = i + 1; j< n; j++)
            {
                if(arr[i][i]) == arr[j][j])
                {
                 distinict = 0;
                 break;
                }
            }
        }


            
        if(distinict == 1)
        printf("Diagnoal element are distnict");
        else
        printf("Diagnoal element are not distnict");
        return 0;
    }

            
        
      