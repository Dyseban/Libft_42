/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 15:24:55 by mle-floc          #+#    #+#             */
/*   Updated: 2019/06/10 21:30:09 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				temp;

	i = 0;
	temp = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		temp += s1[i];
		temp -= s2[i];
		if (temp == 0)
		{
			i++;
		}
		else
		{
			return (temp);
		}
	}
	return (temp);
}
