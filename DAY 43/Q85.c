//Q85 : Reverse a string.

      /*
      Sample Test Cases:
      Input 1:
      abcd
      Output 1:
      dcba

      */
     #include <stdio.h>
     int main() {
       char str[100];
       int i =0;
       printf("Enter a string : ");
       fgets(str , sizeof(str),stdin);
       while (str[i] != '\0' && str[i] != '\n')
     {
        i++;

     }
     int j = i - 1;
    for(int i =0; i<j; i++,  j--)
    {
int     temp = str[i];
str[i] = str[j];
str[j] = temp;

    }
    str[strlen(str)] = '\0';
    printf("Reversed string is : %s",str );
    return 0;
}
