/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_while.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 03:54:16 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/11 03:54:55 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_while(int size, char **strs, char *sep, char *str)
{
	int j;
	int c;
	int m;
	int i;

	i = -1;
	c = 0;
	m = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[c++] = strs[i][j++];
			m++;
		}
		j = 0;
		while (sep[j])
		{
			str[c++] = sep[j++];
			m++;
		}
	}
	str[m - j] = '\0';
	return (str);
}
