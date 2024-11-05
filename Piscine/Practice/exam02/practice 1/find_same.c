/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_same.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:21:47 by ryada             #+#    #+#             */
/*   Updated: 2024/09/19 15:54:26 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

void ft_putsr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *ft_findSame(char *s1, char *s2)
{
    int i;
    int j;
    int q;
    char *result;
    result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    i = 0;
    q = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if(s1[i] == s2[j])
            {
                result[q] = s1[i];
                q++;
            }
            j++;
        }
        i++;
    }
    result[q] = '\0';
    return (result);
}

int main()
{
    char s1[] = "abcd";
    char s2[] = "aa";
    char *result;
    result = ft_findSame(s1, s2);
    ft_putsr(result);
    free(result);
    return (0);
}