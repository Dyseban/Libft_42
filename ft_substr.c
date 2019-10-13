/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 01:14:22 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/13 08:18:55 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	i = 0;
	if (ft_strlen(s) < start)
	{
		dest = malloc(sizeof(char));
		*dest = '\0';
		return (dest);
	}
	dest = malloc(len * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	while (len > 0)
	{
		dest[i] = s[start];
		i++;
		start++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
