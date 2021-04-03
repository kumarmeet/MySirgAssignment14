#include <string.h>

void string_reverse(char str[])
{
  int i, j, l, t;

  l = strlen(str) - 1;

    for(i = 0; str[i]; i++)
    {
        for(j = 0; j < l; j++)
        {
            t = str[i];
            str[i] = str[l];
            str[l] = t;
        }
        l--;
    }

    printf("%s", str);
}

void string_reverse_using_strrev(char ch[])
{
  printf("%s", strrev(ch));
}

void to_lower_string(char str[])
{
  int i;

    for(i = 0; str[i]; i++)
        printf("%c", tolower(str[i]));
}

void to_upper_string(char str[])
{
  int i;

    for(i = 0; str[i]; i++)
        printf("%c", toupper(str[i]));
}

void strlen_string(char str[])
{
  int len = strlen(str);

  printf("%d", len);
}

void string_length(char str[])
{
    int i;

    for(i = 1; str[i]; i++);

    printf("Length of string is %d", i);
}

void given_char_occurance(char s[], int size, char c)
{
    int i,count=0;

    for(i=0; s[i]; i++)
    {
        if(s[i]==c)
        {
            count++;
        }
    }

    printf("character '%c' occurs %d times \n ",c,count);
}
