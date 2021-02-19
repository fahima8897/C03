/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:28:35 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/17 12:41:53 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	while (dest[i])
		i++;
	n = 0;
	while (src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

#include <stdio.h>

int	main()
{
	char src[] = "sunshine";
	char dest[] = "moon";
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
