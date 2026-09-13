//Q60 : Count positive, negative, and zero elements in an array.

                                /*
                                Sample Test Cases:
                                Input 1:
                                5
                                -1 0 1 2 -2
                                Output 1:
                                Positive=2, Negative=2, Zero=1

                                */
#include <stdio.h>
int main() {
    int arr[5]={1,2,3,4,5};
    int i,num;
    int negative=0,positive=0,zero;
    printf("Enter number of elements : ");
    scanf("%d",&num);
    for(int i =0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
        positive++;
        else if(arr[i] < 0)
        negative++;
        else
        zero++;
    }
    printf("Positive number is %d\n",positive);
    printf("Negative number is %d\n",negative);
    printf("Zero is %d\n",zero);                             
return 0;
}
