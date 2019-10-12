/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 03:23:26 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/13 00:10:33 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*str;
	int				sign;
	int				size;

	sign = (n < 0 ? 1 : 0);
	str = NULL;
	size = ft_lenint(n);
	nbr = (n < 0 ? -n : n);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size--] = '\0';
	while (size >= 0)
	{
		str[size] = nbr % 10 + '0';
		nbr = nbr / 10;
		size--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
