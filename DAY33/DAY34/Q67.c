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
        int arr[25],n,element,position;
        int i;
        printf("Enter array elements :\n");
        scanf("%d", &n);
        printf("Enter array elements:\n");
        for(i =0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Enter element to insert : ");
        scanf("%d",&element);
        printf("Enter position : ");
        scanf("%d",&position);
        for(int i =0 ;i < 25 ; i++)
        {
            arr[i]= arr[i - 1];
        }
        arr[position - 1 ] = element;
        n++;
        printf("Array after insertion:\n");
        for(int i = 0; i < n; i++)
            {
                printf("%d", arr[i]);
            }
        return 0;
     }