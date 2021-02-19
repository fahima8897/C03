/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:04:37 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/18 11:48:18 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{		
			if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
			i++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	char tab1[] = "";
	char tab2[] = "helno";
	printf("%d\n", ft_strncmp(tab1, tab2, 2));
	return 0;
}
