/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:38:46 by ryada             #+#    #+#             */
/*   Updated: 2024/11/07 13:50:26 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	length;
	char	*dup;
	int		i;

	length = ft_strlen(src) + 1;
	dup = (char *)ft_calloc(length, sizeof(char));
	i = 0;
	if (!dup)
		return (NULL);
	while (i < length - 1)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// int main()
// {
// 	char original[] = "Hello";
// 	char *copy = ft_strdup(original);
// 	if (copy != NULL)
// 	{
// 		printf("Orginal : %s\n", original);
// 		printf("Copy : %s\n", copy);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return (0);
// }