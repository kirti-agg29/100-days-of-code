//Q69 : Find the second largest element in an array.

      /*
      Sample Test Cases:
      Input 1:
      5
      10 20 30 40 50
      Output 1:
      40

      */
     #include <stdio.h>
     int main() {
     int arr[25],n,i,largest;
     printf("Enter number in an array: ");
     scanf("%d",&n);
     printf("Enter elements:\n");
     for(int i = 0;i < n; i++)
     {
        scanf("%d",arr[i]);

     }
     largest = 0;
     for(int i =1 ;i < n;i++)
     {
        if(arr[i] > largest) {
        largest = arr[i];
     }
    }
    printf("Largest element is = %d",largest);
return 0;
     }
     