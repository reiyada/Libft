/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:47:07 by ryada             #+#    #+#             */
/*   Updated: 2024/11/14 10:31:12 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int main() 
// {
//     const char *str = "hello";
//     char ch = 'e';

//     char *position = ft_strchr(str, ch);

//     if (position == NULL) 
//         printf("Character '%c' not found in the string \"%s\".\n", ch, str);
//     else 
//         printf("Character '%c' found at <<%ld>>.\n", ch, position - str);

//     return 0;
// }