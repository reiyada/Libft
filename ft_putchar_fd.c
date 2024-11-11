#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// int main()
// {
//     char c = 'A';
//     int fd = 1;
//     ft_putchar_fd(c, fd);
//     return (0);
// }