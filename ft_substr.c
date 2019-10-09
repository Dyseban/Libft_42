/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 01:14:22 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/09 01:38:34 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char * len))
	if (dest == NULL)
		return (NULL);
	while (len > 0) {
		dest[i] = s[start]
		i++;
		start++;
		len--;
	}
	return (dest);
}
