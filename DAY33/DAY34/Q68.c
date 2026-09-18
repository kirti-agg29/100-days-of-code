//Q68 : Delete an element from an array.

      /*
      Sample Test Cases:
      Input 1:
      5
      1 2 3 4 5
      2
      Output 1:
      1 2 4 5

      */
#include <stdio.h>
int main() {
    int arr[56], n,position;
    int i;
    printf("Enter number of elements : ");
    scanf("%d", &n);
  printf("Enter array elements :\n ");

for(int i = 0 ; i < n ; i++)
{
scanf("%d", &arr[i]);
}
printf(" Enter position to delete : ");
scanf("%d",&position);
for(i = position - 1 ; i < n - 1; i++)
{
    arr[i]= arr[i + 1];
}
n--;
printf("Array after deletion :\n");
for(i =0; i < n; i++)
{
    printf("%d", arr[i]);
}
return 0;
}
