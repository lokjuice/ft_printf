/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wroyal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:29:32 by wroyal            #+#    #+#             */
/*   Updated: 2021/05/04 18:04:30 by wroyal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	if (n == 0)
		return (0);
	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	i = 0;
	while (c1[i] == c2[i] && i < n - 1)
		i++;
	return (c1[i] - c2[i]);
}
