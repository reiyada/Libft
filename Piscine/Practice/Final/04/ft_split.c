#include <stdlib.h>

int ft_checksep(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);
}

int ft_countWord(char *str)
{
    int i;
    int count;
    int in_word;
    i = 0;
    count = 0;
    in_word = 0;
    while (str[i] != '\0')
    {
        if (ft_checksep(str[i]) == 0 && in_word == 0)
        {
            in_word = 1;
            count ++;
        }
        else if (ft_checksep(str[i]) == 1)
        {
            in_word = 0;
        }
        i++;
    }
    return (count);
}

char *ft_strncpy(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i = 0;
    while (s2[i] != '\0' && i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}


char    **ft_split(char *str)
{
    int i;
    int j;
    int q;
    i = 0;
    j = 0;
    q = 0;
    int count_word;
    count_word = ft_countWord(str) + 1;
    char **result = (char **)malloc(sizeof(char *) * count_word);
    if(!result)
        return (NULL);
    while (str[i] != '\0')
    {
        if (ft_checksep(str[i]) == 0)
        {
            j = i;
            while (str[i] != '\0' && ft_checksep(str[i]) == 0)
                i++;
            result[q] = (char *)malloc(sizeof(char) * (i - j + 1));
            if(!result[q])
            {
                while (q > 0)
                {
                    free (result[q]);
                    q--;
                }
                return (NULL);
            }
            ft_strncpy(result[q], &str[j], i - j);
            q++;
        }
        i++;
    }
    result[q] = NULL;
    return (result);
}
#include <stdio.h>

int main()
{
    char str[] = "Hello I am rei.";
    char **result = ft_split(str);
    int i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        free (result[i]);
        i++;
    }
    free(result);
    return (0);
}