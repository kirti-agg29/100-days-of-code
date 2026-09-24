//Q74 : Find the transpose of a matrix.

      /*
      Sample Test Cases:
      Input 1:
      2 3
      1 2 3
      4 5 6
      Output 1:
      1 4
      2 5
      3 6
*/
#include <stdio.h>
int main() {
    int arr[10][10];
    int row,column,i,j;
    printf("Enter rows and column : ");
    scanf("%d %d",&row,&column);
    printf("Enter elements : ");
    for(int i =0; i< 10; i++)
    {
        for(int j =0; j <10; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transope of matrix :\n");
    for(int i =0; i< 10; i++)
    {
        for(int j =0; j< 10; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

 
 
    