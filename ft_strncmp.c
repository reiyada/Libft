#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i == n)
        return 0;
    return (s1[i] - s2[i]);
}

// int main(void)
// {
//     const char str1[] = "Hello";
//     const char str2[] = "Hello world";
//     size_t j = 7;
//     int result = ft_strncmp(str1, str2, j);
//     if (result == 0)
//         printf("The first 7 characters are the same.\n");
//     else
//         printf("The first 7 characters are not the same.\n");
//     return (0);
// }