/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 01:38:59 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/09 01:57:56 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char final;
	int i;
	int f;
	int l;

	final = malloc(sizeof(char + (ft_strlen(s1) + ft_strlen(s2))));
	i = -1;
	l = -1;
	while (s1[i++])
		final[l++] = s1[i];
	i = 0;
	while (s2[i++])
		final[l++] = s2[i];
	return (final);
}
