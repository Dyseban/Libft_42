/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 23:07:46 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 23:21:29 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ps;
	int i;

	ps = (unsigned char*)s;
	i = 0;

	while (i < n)
	{
		if (ps[i] == c)
			return (s + i);
		else
			i++;
	}
	return (NULL);
}
