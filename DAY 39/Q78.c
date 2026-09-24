//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int arr[10][10],n,i,sum =0;
    printf("Enter size of matrix : ");
    scanf("%d",&n);
    printf("Enter matrix elements:\n");
    for(int i =0; i<10; i++)
    {
        for(int j =0; j<10;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i =0; i< 10; i++)
    {
        sum = sum + arr[i][j];
    }
    printf("sum of main diagnoal = %d,sum");
    return 0;
}
