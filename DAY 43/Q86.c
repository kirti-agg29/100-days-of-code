//Q86 : Check if a string is a palindrome.

      /*
      Sample Test Cases:
      Input 1:
      madam
      Output 1:
      Palindrome

      Input 2:
      hello
      Output 2:
      Not palindrome

      */
    #include <stdio.h>
    int main() {
        char str[100];
        int i =0;
        printf("Enter a string : ");
        fgets(str, sizeof(str), stdin);
        while(str[i] != '\0' && str[i] != '\n')
        {
            i++;
        }
        str[i] = '\0';
        int j = i - 1;
        int flag = 1;   
        for(int i =0 ; i <j;i++, j--)
        {
            if(str[i] != str[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        
            printf("Palindrome ");
            else 
            
                printf("not a palindrome ");
            return 0;
    }

    