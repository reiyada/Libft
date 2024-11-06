#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

// int main(int argc, char **argv)
// {
//     int i;
//     if (argc == 2)
//     {
//         i = 0;
//         char result[20];
//         while (argv[1][i] != '\0')
//         {
//             result[i] = ft_tolower(argv[1][i]);
//             i++;
//         }
//         result[i] = '\0';
//         printf("%s", result);
//     }
//     printf("\n");
//     return (0);
// }