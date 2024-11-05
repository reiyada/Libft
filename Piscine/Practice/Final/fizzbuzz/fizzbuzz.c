/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:00:43 by ryada             #+#    #+#             */
/*   Updated: 2024/09/25 17:09:42 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}

int main()
{
    int i;
    i = 1;
    while (i <= 100)
    {
        if ( i % 3 == 0 && i % 5 == 0)
        {
            write (1, "fizzbuzz\n", 9);
        }
        else if (i % 3 == 0)
        {
            write (1, "fizz\n", 5);    
        }
        else if (i % 5 == 0)
        {
            write (1, "buzz\n", 5);    
        }
        else
        {
            ft_putnbr(i);
            write (1, "\n", 1);            
        }
        i++;
    }
    return (0);
}