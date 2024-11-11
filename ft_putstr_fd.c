#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;     
    }
}

// int main()
// {
//     char str[] = "Hello";
//     int fd = 1;
//     ft_putstr_fd(str, fd);
//     return (0);
// }