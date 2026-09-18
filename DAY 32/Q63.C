//Q63 : Merge two arrays.

      /*
      Sample Test Cases:
      Input 1:
      3
      1 2 3
      2
      4 5
      Output 1:
      1 2 3 4 5

      */

      #include <stdio.h>
      int main() {
        int a[10], b[20], c[30];
        int n1,n2,i;
        printf("Enter size of first array : ");
        scanf("%d",&n1);
        printf("Enter elements of first array : ");
        for(int i =0; i<n1;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter size of second array:");
        scanf("%d",&n2);
      
      
      for(i = 0 ; i < n2; i++)
      {
scanf("%d", &b[i]);
      }
      for(i =0; i<n1; i++)
      {
        c[i] = a[i];
      }
      for(i=0;i < n2; i++)
      {
    c[n1 + i]=b[i];
      }
      printf("Merged array:\n");
      for(i =0; i < n1 +n2; i++)
      printf("%d",c[i]);
    }
    return 0;
}
