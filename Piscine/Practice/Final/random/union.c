#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *is_same(char *s1, char *s2)
{
    int i;
    int j;
    char *same;
    int q;
    i = 0;
    q = 0;
    same = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    while (s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                same[q] = s1[i];
                q++;
            }
            j++;
        }
        i++;
    }
    same[q] = '\0';
    return (same);
}


char *checkDouble(char *str)
{
    int i;
    int j;
    int same;
    int q;
    char *result;
    i = 0;
    q = 0;
    result =(char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
    while (str[i] != '\0')
    {
        j = 0;
        same = 0;
        while (str[j] != '\0')
        {
            if (str[i] == str[j])
            {
                same++;
            }
            j++;
        }
        if (same == 1)
        {
            result[q] = str[i];
            q++;
            i++;
        }
        if (same > 1)
        {
            result[q] = str[i];
            q++;
            i += same;
        }
            same = 0;
    }
    result[q] = '\0';
    return (result);
}

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
/*
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "olleH";
    int i;
    char *same;
    char *result;
        same = is_same(s1, s2);
        result = checkDouble(same);
        ft_putstr(result);
        free(result);
        free(same);
    write(1, "\n", 1);
    return (0);
}
*/



int main(int argc, char **argv)
{
    int i;
    char *result;
    if (argc == 3)
    {
        result = is_same(argv[1], argv[2]);
        result = checkDouble(result);
        ft_putstr(result);
        free(result);
    }
    write(1, "\n", 1);
    return (0);
}