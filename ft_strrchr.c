#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len;

    len = ft_strlen(s);

    while (len > 0)
    {
        if (s[len] == (char)c)
            return ((char *)&s[len]);
        len--;
    }
    if (s[0] == (char)c)
        return ((char *)&s[0]);
    if (c == '\0')
        return ((char *)&s[ft_strlen(s)]);
    return (NULL);
}

// int main() 
// {
//     const char *str = "hello world";
//     char ch = 'o';

//     char *position = ft_strrchr(str, ch);

//     if (position == NULL) 
//         printf("Character '%c' not found in the string \"%s\".\n", ch, str);
//     else 
//         printf("Character '%c' found at position %ld.\n", ch, position - str);

//     return 0;
// }