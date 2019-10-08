/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 23:17:47 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 23:24:06 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ps1;
	unsigned char *ps2;
	int i;

	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	i = 0;

	while (i < n)
	{
		if (!(ps1[i] == ps2[i]))
			return (s1 - s2);
		else
			i++;
	}
	return (0)
}
