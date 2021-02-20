/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:55:17 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/20 08:59:34 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	while (dest[i])
		i++;
	n = 0;
	while (src[n] && n < nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}
