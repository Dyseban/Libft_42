/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 00:22:55 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/09 00:22:57 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*str;

	l = 0;
	while (src[l])
		l++;
	str = malloc(sizeof(*str) * (l + 1));
	i = 0;
	while (i < l)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
