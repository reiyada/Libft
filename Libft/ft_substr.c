/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:07:10 by ryada             #+#    #+#             */
/*   Updated: 2024/11/04 15:15:46 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *substr;

    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);

    i = 0;
    while (s[start] != '\0' && i < len)
    {
        substr[i] = s[start];
        start++;
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

int main(int argc, char **argv)
{
    
}