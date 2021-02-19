/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:45:59 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/17 13:49:52 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		n = 0;
		while (to_find[n] == str[i + n])
		{
			if (to_find[n + 1] == '\0')
				return (str + i);
			n++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	char tab[] = "hello tout le monde la vie est une chienne";
	char tofind[] = "le monde";
	printf("%s\n", ft_strstr(tab, tofind));
	return 0;
}
