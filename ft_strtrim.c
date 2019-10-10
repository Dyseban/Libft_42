/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 01:59:41 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/09 21:47:19 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
		int i;
		int f;
		int size;

		while (set[i])
		{
			size = ft_strlen(s1);
			while (s1[f])
			{
				if (s1[f] == set[i])
				{
					while (f < size)
					{
						s1[f] = s1[f+1];
					}
				}
			}
		}
}
