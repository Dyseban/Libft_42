/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 23:08:14 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/07 23:41:35 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char tmp;
	while (*s != (char)c)
		if (!*s++ == '/0')
			return (0);
	return (char *)s;
}

int main(int argc, char const *argv[]) {
  int c;
  char test[] = "This is a string";

  c = 'i';
  printf("%s\n",ft_strchr(test, c));
  printf("%s\n",strchr(test, c));
  return 0;
}
