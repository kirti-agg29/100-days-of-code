//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/  
#include <stdio.h>
int main() {
    int arr[20],n,key,found =0;
    printf("Enter the numbers of elements : ");
    scanf("%d",&n);
    for(int i =0;i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements to search : ");
    scanf("%d",&key);
    for(int i =0;i<n;i++)
    {
        if(arr[i] == key) {
            printf("Elements found at a position %d\n",i+1);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Elements not found\n");
    }
    return 0;
}