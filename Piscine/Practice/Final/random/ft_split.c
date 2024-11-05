#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int ft_checkSep(char c)
{
    if (c == ' ' || c == '\n' || c == '\t')
        return (1);
    else
        return (0);
}
int ft_countWord(char *str)
{
    int i;
    int count;
    int in_word;
    i = 0;
    in_word = 0;
    count = 0;
    while (str[0] != '\0' && ft_checkSep(str[0]) == 1)
    {
        i++;
        while (str[i] != '\0')
        {
            if (ft_checkSep(str[i] == 0))
            {
                in_word++;
                count++;
                while (str[i] != '\0' && ft_checkSep(str[i] == 0) && in_word == 1)
                {
                    i++;
                }
                in_word = 0;
            }
            i++;
        }
    }
    return (count);
}

#include <stdio.h>

int main(void)
{
    char str[] = "Hello I am rei.";
    printf("%d", ft_countWord(str));
}
/*
char    **ft_split(char *str)
{

}
*/