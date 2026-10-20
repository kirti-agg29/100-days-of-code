//Q83 : Count vowels and consonants in a string.

      /*
      Sample Test Cases:
      Input 1:
      hello
      Output 1:
      Vowels=2, Consonants=3

      */
     #include <stdio.h>
     int main() {
        char str[100];
        int i =0,vowel =0, consonants = 0;
        printf("Enter a string : ");
        fgets(str , sizeof(str), stdin);
        while(str[i] != '\0')
        {
            if(str[i] >= 'A'&&str[i]<= 'Z')
            str[i] = str[i] + 32;
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                    vowel++;
                else
                    consonants++;
            }
            i++;
        }
        printf("Vowels=%d, Consonants=%d\n", vowel, consonants);
        return 0;
     }