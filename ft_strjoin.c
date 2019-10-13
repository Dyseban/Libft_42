/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:05:44 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/13 08:16:43 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	char	*newstring;
	int		i;
	int		f;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	newstring = malloc((size_s2 + size_s1 + 1) * sizeof(char));
	if (!s1 || !s2 || newstring == NULL)
		return (NULL);
	i = 0;
	f = 0;
	while (i < size_s1)
		newstring[i++] = s1[f++];
	f = 0;
	while (i < (size_s1 + size_s2))
		newstring[i++] = s2[f++];
	newstring[i] = '\0';
	return (newstring);
}
