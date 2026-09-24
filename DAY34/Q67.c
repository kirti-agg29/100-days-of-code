//Q67 : Insert an element in an array at a given position.

      /*
      Sample Test Cases:
      Input 1:
      4
      10 20 30 40
      2 15
      Output 1:
      10 20 15 30 40

      */

      #include <stdio.h>
      int main() {
        int arr[24],n,element,position,i;
        printf("Enter number of elements : ");
        scanf("%d",&n);

        printf("Enter array elements:\n");
        for(int i =0 ; i < 24; i++)
        {
          scanf("%d",&arr[i]);
        }
        printf("Enter elements to insert : ");
        scanf("%d",&element);

        printf("Enter positions:  ");
        scanf("%d",&position);
        for (int i =0 ; i>position;i--)
        {
          arr[position - 1] = element;
          n++;
          printf("Array after insertion : \n");
          for(i = 0; i<n;i++)
          {
            
          }
        }
      }
