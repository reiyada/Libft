/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:11:24 by ryada             #+#    #+#             */
/*   Updated: 2024/11/04 16:15:16 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     argc == 2;
//     printf("%d\n", ft_strlen(argv[1]));
//     return (0);
// }