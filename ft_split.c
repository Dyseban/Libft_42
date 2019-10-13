/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 07:50:10 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/13 04:10:35 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		l;
	char	**str;

	i = -1;
	j = 0;
	if (!s || !c || !(str = (char**)malloc(sizeof(char*) * (ft_cw(s, c) + 1))))
		return (NULL);
	while (ft_cw(s, c) > ++i)
	{
		l = 0;
		if (!(str[i] = (char*)malloc(sizeof(char) * (ft_ws(&s[j], c) + 1))))
		{
			ft_free_2d(str, j);
			return (NULL);
		}
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][l++] = s[j++];
		str[i][l] = '\0';
	}
	str[i] = 0;
	return (str);
}
