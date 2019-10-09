/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 02:07:22 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/09 02:27:50 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split(char const *s, char c)
{
	int i;
	int l;
	int f;
	char final;

	l = 0;
	h = 0;
	final = malloc(sizeof(char * (ft_strlen(s))));
	if (final == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			l = 0;
			f++;
			i++;
		}
		final[f][l] = s[i];
		i++;
		l++;
	}
	return (final);
}
