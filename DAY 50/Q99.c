// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main() {
    int dd,mm, yyyy;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d",&dd, &mm, &yyyy);
    if(mm == 4) {
        printf("converted date : %02d-Apr-%d\n", dd, yyyy);
    }
else {
    printf("Month is not April \n");
}
return 0;
}